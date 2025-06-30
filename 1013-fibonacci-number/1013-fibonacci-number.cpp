class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int firstnum=0, secondnum=1, fibonum;
        for(int i=2; i<=n; i++){
            fibonum = firstnum + secondnum;
            firstnum = secondnum;
            secondnum = fibonum;
        }
        return fibonum;
    }
};