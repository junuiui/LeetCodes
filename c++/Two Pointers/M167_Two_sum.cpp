#include <vector>

using namespace std;

// // Two Loop O(N^2)
// // Time Exceeded
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//         vector<int> sol;
        
//         for (int i = 0; i < numbers.size() - 1; i++){
//             for (int j = 0; j < numbers.size(); j++){
//                 if (numbers[i] + numbers[j] == target) {
//                     sol.push_back(i);
//                     sol.push_back(j);
//                 }
//             }
//         }
//         return sol;
//     }
// };

// Use two pointer
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i = 0, j = size - 1;

        while (i < j) {
            if (numbers[i] + numbers[j] == target) {
                return {i+1, j+1};
            }
            else if (numbers[i] + numbers[j] > target){
                j--;
            }
            else {
                i++;
            }
        }
        
        return {};
    }
};