
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long p = 2; p * p <= c; p++) {
            if (c % p == 0) {
                int count = 0;

                while (c % p == 0) {
                    c /= p;
                    count++;
                }

                if (p % 4 == 3 && count % 2 != 0) {
                    return false;
                }
            }
        }

        return c % 4 != 3;
    }
};
