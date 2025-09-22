class Solution 
{
  public:
    unordered_map<int,int> dp;
    int fib(int n) 
    {
      if(n==0) return 0;
      if(n==1) return 1;
      if(dp.count(n)) return dp[n];

      else{
        return dp[n]=fib(n-1)+fib(n-2);

      }
    }
};
