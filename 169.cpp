class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int vote = 0, candidate = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (vote == 0) {
        candidate = nums[i];
        vote = 1;
      } else if (nums[i] == candidate) {
        vote++;
      } else if (nums[i] != candidate)
        vote--;
    }
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (candidate == nums[i]) {
        count++;
      }
    }
    if (count > nums.size() / 2)
      return candidate;
    return 0;
  }
};
