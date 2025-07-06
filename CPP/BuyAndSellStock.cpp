class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int minPrice = prices[0];
        int maxProf = 0;

        for (int i = 1; i < n; i++) {
            int potentialProf = prices[i] - minPrice;

            minPrice = min(minPrice, prices[i]); //finding new minimum price
            maxProf = max(maxProf, potentialProf); //finding new maximum profit
        }

        return maxProf;
    }
};
