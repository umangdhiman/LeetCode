class Solution {
public:
    bool isUgly(int num) {
        int i,flag=0;
        if(num<=0) return 0;
        if(num<7){
            return 1;
        }
        if ((num%2) && (num%3) && (num%5)) return 0;
        while (num%2 == 0) num/=2;
        while (num%3 == 0) num/=3;
        while (num%5 == 0) num/=5;
        return isUgly(num);
    }
};
