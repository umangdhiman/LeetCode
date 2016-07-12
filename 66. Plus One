class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,c=1;
        for(i=digits.size()-1;i>=0;i--){
            c+=digits[i];
            if(c<10){
                digits[i]=c;
                return digits;
            }
            else{
                digits[i]=c%10;
                c=c/10;
                if(i==0){
                    digits.insert(digits.begin(),1);
                }
            }
        }
        return digits;
    }
};
