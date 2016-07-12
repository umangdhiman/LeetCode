class Solution {
public:
    bool isPowerOfFour(int num) {
        int count1=0,count2=0;
        while(num>0){
            if(num&1==1)
                count1++;
            else
                count2++;
            num>>=1;
        }
        if(count1==1&&(count2%2==0))
            return 1;
        else
            return 0;
    }
};
