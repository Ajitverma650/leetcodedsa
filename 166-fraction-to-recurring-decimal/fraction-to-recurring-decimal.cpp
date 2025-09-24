class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
         if (numerator == 0) return "0";

        string result = "";

        // Step 1: Handle sign
        if ((numerator < 0) ^ (denominator < 0)) result += "-";

        // Step 2: Work with long long to avoid overflow
        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);

        // Step 3: Integer part
        result += to_string(num / den);
        long long remainder = num % den;
        if (remainder == 0) return result;

        result += ".";

        // Step 4: Fractional part with map for repeats
        unordered_map<long long, int> remainderPos;
        string fraction = "";

        while (remainder != 0) {
            if (remainderPos.find(remainder) != remainderPos.end()) {
                int pos = remainderPos[remainder];
                fraction.insert(pos, "(");
                fraction += ")";
                result += fraction;
                return result;
            }
            remainderPos[remainder] = fraction.size();

            remainder *= 10;
            fraction += to_string(remainder / den);
            remainder %= den;
        }

        result += fraction;
    
        return result;
    }
};