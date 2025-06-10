/*
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/

#include <vector>

class Solution {
public:
    int reverse(int x) {

        if (x == 0) return 0;

        bool isPositive = (x > 0);

        long long val = (isPositive) ? (long long) x : (long long) x * -1;

        vector<int> original;

        while (val != 0){
            original.push_back(val % 10);
            val /= 10;
        }

        long long result = 0;
        long long mult = 1;
        for (int i = original.size() - 1; i >= 0; i--){
            result += (long long) original[i] * mult;
            mult *= 10;
        }

        result = (isPositive) ? result : result * -1;
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};