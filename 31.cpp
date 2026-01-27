class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int n = nums.size();
    int i = n - 2;

    // find first decreasing element
    while (i >= 0 && nums[i] >= nums[i + 1])
      i--;

    if (i >= 0) {
      // find element just larger than nums[i]
      int j = n - 1;
      while (nums[j] <= nums[i])
        j--;

      swap(nums[i], nums[j]);
    }

    // reverse the suffix
    reverse(nums.begin() + i + 1, nums.end());
  }
};
