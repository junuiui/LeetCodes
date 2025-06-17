#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 0;

        int index = 0;
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++){
            maxPalindromeIndex(i, i, s, index, maxLen);
            maxPalindromeIndex(i, i+1, s, index, maxLen);
        }

    }

private:
    void maxPalindromeIndex(int left, int right, const string& s, int& index, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        int currentLen = right - left - 1;
        if (maxLen < currentLen) {
            maxLen = currentLen;    // replace the current Max Length
            index = left;
        }
     }
};
