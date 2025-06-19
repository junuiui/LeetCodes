#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        
        for (int i : nums) {
            freq[i]++;
        }

        for (auto& [num, count] : freq) {
            cout << num << " appears " << count << " times" << endl;
        }

        return {0};
    }
};