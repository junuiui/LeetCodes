#include <iostream>
#include <vector>

/*

Given an integer x, return true if x is a palindrome, and false otherwise.

*/

// Using Vector 12ms / 6.75%
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) return false;
//         if (x > 9 && x % 10 == 0) return false;
        
//         std::vector<int> separated_nums;

//         int d = 10;
//         int val;
//         int new_x = 0;
//         while (x != 0){
//             val = x % d;
//             x /= d;
//             separated_nums.push_back(val);
//         }

//         int len = separated_nums.size();

//         for (int i = 0; i < len / 2; i++){
//             if (separated_nums[i] != separated_nums[len-1-i]) {
//                 return false;
//             }
//         }
        
//         return true;
//     }
// };

// Using Comparison
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x > 9 && x % 10 == 0) return false;

        long long original = x;
        int val;
        long long new_x = 0;
        
        while (x != 0){
            val = x % 10;
            x /= 10;
            new_x = val + new_x * 10;
        }
        
        return original == new_x;
        
    }
};