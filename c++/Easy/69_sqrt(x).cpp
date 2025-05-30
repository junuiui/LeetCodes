#include <algorithm>
#include <math.h>
using namespace std;

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
// 1 4 9 16