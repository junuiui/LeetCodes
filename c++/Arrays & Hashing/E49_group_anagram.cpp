#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map<string, vector<string>> groups;
        
        // sort, filter
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());

            groups[key].push_back(str);
        }

        for (auto& [key, group] : groups) {
            result.push_back(group);
        }

        return result;
    }
};