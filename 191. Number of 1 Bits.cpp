class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count=0;
        while(n){
            if(n&1==1)
                count++;
            n>>=1;
        }
        return count;
    }
};
