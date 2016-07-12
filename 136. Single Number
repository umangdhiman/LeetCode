class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,count=0;
        if(nums.size()==0) return 0;
        for(i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[i];
    }
};
