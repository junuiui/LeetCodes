#include <algorithm>
#include <math.h>
using namespace std;

// Using Binary Search
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;

        int lower = 1;
        int upper = x;
        int mid = -1;

        while (lower <= upper) {
            mid = lower + (upper - lower) / 2;
            long long square = static_cast<long long>(mid) * mid;
            if (square > x) upper = mid -1;
            else if (square == x) return mid;
            else lower = mid + 1;
        }

        return std::round(upper);
    }
};

// Using UpperBound Loop (too many type casting..)
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;

        long long lower, upper;
        
        for (int i = 1; i <= x/2; i++){
            lower = static_cast<long long>(i) * static_cast<long long>(i);
            upper = static_cast<long long>(i+1) * static_cast<long long>(i+1);

            if (x >= lower && x < upper) return i;
        }

        return -1;
    }
};