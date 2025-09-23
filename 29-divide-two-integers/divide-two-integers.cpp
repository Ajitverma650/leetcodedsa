class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Determine sign of result
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        // Convert to long long to avoid overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long result = 0;

        // Efficient subtraction using bit shifting
        while (a >= b) {
            long long temp = b, multiple = 1;
            // Keep doubling divisor until it's larger than dividend
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;       // subtract the largest chunk
            result += multiple; // add corresponding quotient part
        }

        result = sign * result;

        // Clamp to 32-bit range
        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;
        return (int)result;
    }
};
