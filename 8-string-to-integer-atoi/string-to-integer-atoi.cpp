class Solution {
public:
    int myAtoi(string s) {
        int size = s.size();
        int i = 0, sign = 1;
        long sum = 0;  // Using long to detect overflow

        // Step 1: Ignore leading whitespaces
        while (i < size && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for sign
        if (i < size && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Ignore leading zeros
        while (i < size && s[i] == '0') {
            i++;
        }

        // Step 4: Convert digits
        while (i < size && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Check for overflow before multiplying
            if (sum > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            sum = sum * 10 + digit;
            i++;
        }

        return sign * sum;
    }
};