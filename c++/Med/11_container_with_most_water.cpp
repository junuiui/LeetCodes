#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        // // brutal - failed (time limit)
        // int max_area = 0;
        // for (int i = 0; i < height.size() - 1; i++){
        //     for (int j = i + 1; j < height.size(); j++){
        //         int temp = min(height[i], height[j]) * (j - i);
        //         if (max_area < temp){
        //             max_area = temp;
        //         } 
        //     }
        // }

        // return max_area;

        // optimal (using left / right)
        int left = 0, right = height.size() - 1;
        int max_area = -1;
        while (left < right){
            int h = min(height[left], height[right]);
            int w = right - left;

            max_area = max(max_area, h * w);

            if (height[left] < height[right]) left++;
            else right--;
        }

        return max_area;

    }
};