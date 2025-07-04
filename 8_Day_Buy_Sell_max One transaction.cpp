class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for(int price: prices){
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};
