class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long  int rev=0;
        long  int org = x;
        while(x!=0){
            long  int dig = x%10;
            rev = rev*10 + dig;
            x /= 10;
        }
        return rev==org;    
    }
};