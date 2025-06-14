
// 0 ms
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int s_len = s.length();

        vector<int> result(s_len, s_len);

        // left to right
        for (int i = 0; i < result.size(); i++){
            int curr = i;
            while (curr < s_len){
                if (s[curr] == c) {
                    result[i] = curr-i;
                    break;
                }
                curr++;
            }
        }

        // right to left
        for (int i = result.size()-1; i >= 0; i--){
            int curr = i;
            while (curr >= 0){
                if (s[curr] == c) {
                    if (result[i] > (i-curr)) result[i] = i - curr;
                    break;
                }
                curr--;
            }
        }
        return result;
    }
};


// 0 ms
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int s_len = s.length();
        vector<int> result(s_len, s_len);

        // left to right
        int curr = -(2 * s_len);
        for (int i = 0; i < s_len; i++){
            if (s[i] == c) curr = i;
            result[i] = i - curr;
        }

        // right to left
        curr = s_len * 2;
        for (int i = s_len-1; i >= 0; i--){
            if (s[i] == c) curr = i;
            result[i] = min(result[i], curr - i);
        }

        return result;
    }
};