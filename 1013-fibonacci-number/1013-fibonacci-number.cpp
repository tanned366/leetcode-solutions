class Solution {
public:
    int fib(int n) {
        int firstnum=0;
        int secondnum=1;
        int fibonum;
        if(n==0) return 0;
        if(n==1) return 1;
        for(int i=2; i<=n; i++){
            fibonum = firstnum + secondnum;
            firstnum = secondnum;
            secondnum = fibonum;
        }
        return fibonum;
    }
};