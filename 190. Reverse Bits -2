class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t s=0;
        int i=0;
        while(n){
            s=s<<1;
            s=s+(n&1);
            n=n>>1;
            i++;
        }
        s=s<<(32-i);
        return s;
    }
};
