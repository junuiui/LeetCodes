class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        if (nums.empty()) return {-1,-1};
        
        // apply binary search
        int low = 0, high = nums.size() - 1;
        int mid;
        int val;
        bool found = false;

        while (low <= high) {
            mid = low + (high - low) / 2;

            val = nums[mid];

            if (val == target) {
                found = true;
                break;
            }
                
            if (val < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (!found) return {-1,-1};

        int start, end;

        int last = mid;
        while (mid <= high && last <= high){
            if (val== nums[last]){
                end = last++;
            }
            else {
                break;
            };
        }

        int first = mid;
        while (mid >= low && first >= low){
            if (val == nums[first]) {
                start = first--;
            }
            else {
                break;
            }
        }

        return {start, end};
    }
};