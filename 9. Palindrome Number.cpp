class Solution {
public:
    bool isPalindrome(int x) {
        int i,j,n=0;
        if(x<0) return 0;
        i=x;
        while(i){
            j=i%10;
            i=i/10;
            n=n*10+j;
        }
        if(n==x) return 1;
        else
            return 0;
    }
};
