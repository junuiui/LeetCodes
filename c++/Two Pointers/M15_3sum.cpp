#include <vector>

using namespace std;

// Using k as pivot and apply two pointer technique
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> sol;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    sol.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }
        return sol;
    }
};