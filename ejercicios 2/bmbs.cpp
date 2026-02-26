class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimo = prices[0];
        int ganancia = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < minimo) {
                minimo = prices[i];
            } else {
                ganancia = max(ganancia, prices[i] - minimo);
            }
        }

        return ganancia;
    }
};