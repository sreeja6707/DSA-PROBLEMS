class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxiPro = 0;
    int n = prices.size();
    int miniPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++) {
        miniPrice = min(miniPrice, prices[i]);
        maxiPro = max(maxiPro, prices[i] - miniPrice);
    }
    
    return maxiPro;
    }
};