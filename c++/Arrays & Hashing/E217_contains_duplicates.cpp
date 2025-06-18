// https://leetcode.com/problems/contains-duplicate/description/

#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// // Sort Version 15ms
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {

//         int numsLength = nums.size();

//         if (numsLength == 0) return false;
        
//         // sort? O(NlogN)
//         sort(nums.begin(), nums.end());

//         int target = nums[0];
//         int k;
//         for (int i = 1; i < numsLength; i++) {
//             k = nums[i];
//             if (target == k) return true;
//             else target = k;
//         }
//         return false;
//     }
// };

// Hash Map? 52 ms
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int k : nums){
            if (seen.count(k)) return true;
            seen.insert(k);
        }

        return false;
    }
};