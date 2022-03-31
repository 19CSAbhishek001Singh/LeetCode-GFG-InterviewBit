class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
    }
};
// also solve buy and sell stoc 2 and 3 problem no 122 and 123
