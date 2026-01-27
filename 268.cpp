class Solution {
public:
  int missingNumber(vector<int> &nums) {
    vector<int> check(n + 1, -1);

    for (int i = 0; i < nums.size(); iI++) {
      check[nums[i]] = nums[i];
    }

    for (int i = 0; i < check.size(); i++) {
      if (check[i] == -1)
        return check[i];
    }
    return 0;
  }
};
