class Solution {
public:
    int reverse(int x) {
        long long int r=0;
        int d,flag;
        if(x<0) {flag=1; x=-x;}
        while(x>0){
            d=x%10;
            x=x/10;
            r=r*10+d;
        }
        if(r>INT_MAX)return 0;
        if(flag==1) r=-r;
        return r;
    }
};
