class Solution {
  public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int f = firstPos(nums,target);
      int l = lastPos(nums,target);

      return {f,l};

    }

    int firstPos(vector<int> &nums, int target)  {
      int lo = 0, hi = nums.size()-1,ans=-1;

      while(lo<=hi) {
        int mid = (lo+hi)/2;
        
        if(nums[mid]==target) {
          ans = mid;
          hi = mid-1;
        }
          
        else if(nums[mid] > target) {
          hi = mid-1;
        }
        else {
          lo = mid + 1;
        }
      }
      return ans;
    }

    int lastPos(vector<int> &nums, int target)  {
      int lo = 0, hi = nums.size()-1,ans=-1;

      while(lo<=hi) {
        int mid = (lo+hi)/2;
        
        if(nums[mid]==target) {
          ans = mid;
          lo = mid+1;
        }
        else if(nums[mid] < target) {
          lo = mid+1;
        }
        else {
          hi = mid-1;
        }
      }
      return ans;
    }
};
