struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end(),myobject);
        return nums[nums.size()/2];
    }
};
