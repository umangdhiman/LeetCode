class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i,count1=1,count2=0;
        vector<int> v;
        sort(nums.begin(),nums.end());
        if(nums.size()<=1) return nums;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count1++;
            }
            else{
                if(count1>(nums.size()/3)){
                    v.push_back(nums[i]);
                    count2++;
                    count1=1;
                }
                else{
                    count1=1;
                }
            }
        }
        if(count1>=1&&(count1>(nums.size()/3))){
            v.push_back(nums[i]);
        }
        return v;
    }
};
