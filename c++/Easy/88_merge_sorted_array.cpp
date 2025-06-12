#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        /*
            nums1.length == m + n
            nums2.length == n
            0 <= m, n <= 200
            1 <= m + n <= 200
            -10^9 <= nums1[i], nums2[j] <= 10^9
        */

        if (n == 0) return;

        if (m == 0){
            for (int i = 0; i < m+n; i++){
                nums1[i] = nums2[i];
            }
        }

        int i = m - 1; // for m
        int j = n - 1; // for n
        int curr = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]){
                nums1[curr--] = nums1[i--];
            }
            else{
                nums1[curr--] = nums2[j--];
            }
        }

        while (j>=0){
            nums1[curr--] = nums2[j--];
        }
    }
};