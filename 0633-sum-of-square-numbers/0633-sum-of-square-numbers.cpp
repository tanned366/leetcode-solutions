
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; a++) {
            long long remaining = c - a * a;
            long long b = sqrt(remaining);

            if (b * b == remaining) {
                return true;
            }
        }

        return false;
    }
};
