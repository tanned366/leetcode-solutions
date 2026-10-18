
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;

        for (long long k = 1; k <= n; k++) {
            long long numerator = 2LL * n - k * (k - 1);

            if (numerator <= 0) {
                break;
            }

            if (numerator % (2 * k) == 0) {
                count++;
            }
        }

        return count;
    }
};
