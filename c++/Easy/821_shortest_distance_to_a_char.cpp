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
                    cout << "i: " << i << " | curr: " << curr << " | s[curr]: " << s[curr] << endl;
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
                    cout << "i: " << i << " | curr: " << curr << " | s[curr]: " << s[curr] << endl;
                    break;
                }
                curr--;
            }
        }

        cout << "result...\n";
        for (int k : result){
            cout << k << " ";
        }
        cout << endl;

        return result;
    }
};