class Solution {
public:
    int mySqrt(int x) {
        long int mid;
        int i,l=0,r=x;
        while(l<r){
            mid=(l+r)/2+1;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                l=mid;
            }
            else r=mid-1;
        }
        return l;
    }
};
