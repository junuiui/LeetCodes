// https://leetcode.com/problems/valid-anagram/description/

// sort both
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return s.compare(t) == 0;
//     }
// };

// use vector
class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> count(26);

        for (char c : s) {
            count[c - 'a']++;
        }

        for (char c : t) {
            count[c - 'a']--;
        }

        for (int i : count){
            if (i != 0) return false;
        }

        return true;
    }
};