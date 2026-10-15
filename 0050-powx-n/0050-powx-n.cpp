
class Solution {
public:
    long double solve(long double x, long long n) {
        if (n == 0) {
            return 1.0L;
        }

        long double half = solve(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }

        return x * half * half;
    }

    double myPow(double x, int n) {
        long long power = n;
        long double base = x;

        if (power < 0) {
            base = 1.0L / base;
            power = -power;
        }

        return static_cast<double>(solve(base, power));
    }
};
