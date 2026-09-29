class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, minPrice = prices[0];
        for (int i = 0; i < prices.size(); i++){
            maxi = max(maxi, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return maxi;
    }
};