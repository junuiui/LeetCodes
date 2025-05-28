#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        // going backward
        int len = s.length();
        int i = len - 1;
        int result = 0;

        // setting up the last starting index
        while (s[i] == ' '){
            i--;
        }

        while (i >= 0) {
            if (s.at(i) == ' ') break;
            else {
                result++;
                i--;
            }
        }
        return result;
    }
};