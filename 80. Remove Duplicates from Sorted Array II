class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int i,l=nums.size();
        for(i=0;i<l-2;i++){
            if(nums[i]==nums[i+1]&&nums[i]==nums[i+2]){
                l--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return l;
    }
};
