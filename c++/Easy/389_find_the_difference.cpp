class Solution {
public:
    char findTheDifference(string s, string t) {

        int s_len = s.length();
        if (s_len == 0) return t.at(0);

        vector<int> counter(26);

        for (char c : s) {
            counter[c - 'a']++;
        }

        for (char c : t) {
            if (counter[c - 'a'] == 0) return c;
            counter[c - 'a']--;
        }
        return ' ';
    }
};