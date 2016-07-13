class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum,i,sum1=0;
        sum=nums.size()*(nums.size()+1)/2;      //sum of n nos. = n*(n+1)/2
        for(i=0;i<nums.size();i++){
            sum1+=nums[i];
        }
        return sum-sum1;
    }
};
