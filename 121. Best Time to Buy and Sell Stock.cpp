class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxim=0,minim=INT_MAX,i;
        for(i=0;i<prices.size();i++){
            minim=min(minim,prices[i]);
            maxim=max(maxim,prices[i]-minim);
        }
        return maxim;
    }
};
