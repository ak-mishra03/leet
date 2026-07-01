class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int l = 0, r = nums.size();
      while(l<=r) {
        int mid = l+(r-l)/2;

        if(nums[mid]>nums[mid+1] && nums[mid-1]) return mid;
        else if(nums[mid]<nums[mid+1]) l=mid+1;
        else if(nums[mid]>nums[mid-1]) r=mid-1;
      }
      return -1;
    }
};
