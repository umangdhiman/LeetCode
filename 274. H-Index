class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i,n=citations.size(),a=0;
        sort(citations.begin(), citations.end());
        for(i=0;i<n;i++){
            if(citations[i]>=n-i){
                a=max(n-i,a);
            }
        }
    return a;
    }
};
