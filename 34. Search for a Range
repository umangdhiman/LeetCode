class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l,r,mid,min,max,a=-1;
        l=0;
        r=nums.size()-1;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                a=mid;
                break;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else
                r=mid-1;
        }
        if(a==-1) 
            return vector<int> {-1,-1};
        l=0;
        r=a;
        min=a;
        max=a;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                min=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
        }
        l=a;
        r=nums.size()-1;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                max=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
        }
        return vector<int> {min,max};
    }
};
