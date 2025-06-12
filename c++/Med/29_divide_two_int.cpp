class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // a/b
        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long result = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            // count how many times divisor could be (until < dividend)
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            result += multiple;

        }

        // considering the negative, if both negative => positive, either => negative, neither => positive
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        return isNegative ? -result : result;
    }
};