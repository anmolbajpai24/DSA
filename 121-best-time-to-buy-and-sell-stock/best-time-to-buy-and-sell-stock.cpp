class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int profit = 0;
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[sell] > prices[buy]){
                profit = prices[sell] - prices[buy];
                maxProfit = max(profit, maxProfit);
            }
            else{
                buy = sell;
            }
            sell++;
        }

        return maxProfit;
    }
};