class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int buy = prices[0];
    int maxpro = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < buy)
        buy = prices[i];
      else {
        maxpro = max(maxpro, prices[i] - buy);
      }
    }
    return maxpro;
  }
};
