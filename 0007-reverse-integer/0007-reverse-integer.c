int reverse(int x) {
    long int rev = 0;
    while (x != 0) {
        long int dig = x % 10;
        rev = rev * 10 + dig;
        x /= 10;
    }
    if (rev <= INT_MAX && rev >= INT_MIN)
        return rev;
    else
        return 0;
}