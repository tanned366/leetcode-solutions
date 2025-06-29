class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= INT_MAX || x <= INT_MIN)
            return 0;
        if (x < 0)
            return false;
        int num = 0;
        int n = x;
        while (n != 0) {
            int dig = n % 10;
            if (num > (INT_MAX - dig) / 10) // rearrange num*10+dig doen't overflow
                return 0;
            num = num * 10 + dig;
            n = n / 10;
        }
        if (num == x)
            return true;
        else
            return false;
    }
};
