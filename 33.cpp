class Solution {
public:
    int search(vector<int>& nums, int target) {
        int piv = pivot(nums);

        int left, right;

        if(target >= nums[piv] && target <= nums.back()) {
            left = piv;
            right = nums.size()-1;
        } 
        else {
            left = 0;
            right = piv-1;
        }

        while(left <= right) {
            int mid = (left+right)/2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                left = mid+1;
            else
                right = mid-1;
        }

        return -1;
    }

    int pivot(vector<int> &nums) {
        int left = 0, right = nums.size()-1;

        while(left < right) {
            int mid = (left+right)/2;

            if(nums[mid] > nums[right])
                left = mid+1;
            else
                right = mid;
        }

        return left;
    }
};
