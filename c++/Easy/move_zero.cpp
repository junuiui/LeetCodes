#include <iostream>
#include <vector>

class Solution {
public:
    void swap(vector<int>& nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1){
            return;
        }
        int j = 0;
        for (int i = 0; i < len; i++){
        
            if (nums[j] == 0 && nums[i] != 0){
                swap(nums, i ,j);
                j++;
            }

            if (nums.at(j) != 0){
                j++;
            }
        }

    }
};

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?
*/