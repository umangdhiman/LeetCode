class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,len=nums.size();
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        for(i=0;i<nums.size()-1;){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                len--;        
            }
            else i++;
        }
        return len;
    }
};
