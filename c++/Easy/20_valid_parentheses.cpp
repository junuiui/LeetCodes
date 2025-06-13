#include <iostream>
#include <string>
#include <stack>

using namespace std;

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:
    Input: s = "()"
    Output: true

Example 2:
    Input: s = "()[]{}"
    Output: true

Example 3:
    Input: s = "(]"
    Output: false

Example 4:
    Input: s = "([])"
    Output: true

 

Constraints:

    1 <= s.length <= 104
    s consists of parentheses only '()[]{}'.
*/

class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        
        // has to be even number (pair)
        if (len % 2 != 0) return false;

        stack<char> opening;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                opening.push(c);
            } 
            else {
                if (opening.empty()) {
                    return false;
                }
                else {
                    char l = opening.top();
                    switch (c) {
                        case ')': if (l != '(') return false; break;
                        case '}': if (l != '{') return false; break;
                        case ']': if (l != '[') return false; break;
                        default: break;
                    }
                }
                opening.pop();
            }
        }

        // check remaining open brackets
        if (!opening.empty()) return false;

        return true;
    }
};