class Solution 
{
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int> left_prod(n, 1), res(n, 1);

      // Left product
      for (int i = 1; i < n; i++) {
        left_prod[i] = left_prod[i-1] * nums[i-1];
      }

      // Right product on the fly
      int right_prod = 1;
      for (int i = n - 1; i >= 0; i--) {
        res[i] = left_prod[i] * right_prod;
        right_prod *= nums[i];
      }

      return res;
    }
};

