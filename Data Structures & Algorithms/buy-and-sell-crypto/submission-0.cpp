class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < n; i++) {
            int sell = prices[i];

            if(sell - buy > profit) {
                profit = sell - buy;
            }

            if(prices[i] < buy) {
                buy = prices[i];
            }
        }

        return profit;
    }
};
