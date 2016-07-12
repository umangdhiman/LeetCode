class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,x,y;
        vector<int> res;
        x=nums1.size();
        y=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<x&&j<y){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
            while(i > 0 && i < x && nums1[i] == nums1[i - 1]) i++;
            while(j > 0 && j < y && nums2[j] == nums2[j - 1]) j++;
        }
        return res;
    }
};
