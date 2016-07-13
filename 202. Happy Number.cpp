class Solution {
public:
    bool isHappy(int n) {
        int res;
        while(1){
            res=0;
            while(n){
                res+=(n%10)*(n%10);
                n=n/10;
            }
            if(res==1) return 1;
            if(res==4){
                return 0;
            }
            n=res;
        }
    }
};
