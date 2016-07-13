class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> new1;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    new1.push_back(i);
                    new1.push_back(j);
                    return new1;
                }
            }
        }
        return {0,0};
    }
};
