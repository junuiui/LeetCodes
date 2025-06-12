#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int pointer = 0;
        int sLen = s.length();
        long long result = 0;

        bool isNeg = false;

        // leading whitespaces
        while (s[pointer] == ' ' && pointer < sLen) {
            pointer++;
        }

        // + / -
        if (pointer < sLen && (s[pointer] == '-' || s[pointer] == '+')){
            isNeg = (s[pointer] == '-');
            pointer++;
        }

        while (pointer < sLen && isdigit(s[pointer])){
            int digit = s[pointer] - '0';

            if (result > (INT_MAX - digit) / 10) {
                return isNeg ? INT_MIN : INT_MAX;
            }

            result = result * 10 + digit;

            pointer++;
        }

        return isNeg ? -result : result;
    }
};