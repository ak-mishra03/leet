class Solution {
public:
  int longestSubarray(vector<int> &nums) {
    int pidx = 0, cl = 0, ml = -1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] < nums[i - 1]) {
        if (nums[i + 1] < nums[i - 1]) {
          ml = max(ml, (i - pidx + 1));
        } else {
          cl = i - pidx + 1;
          ml = max(cl, ml);
          cl = 0;
          pidx = i;
        }
      }
    }
    return ml;
  }
};
