class Solution {
public:
    int sum(vector<int>&nums, int i, int j)
    {
      int maxSum = INT_MIN;
      int current_Sum = 0;

      for( int i = 0;i<nums.size();i++)
      {
        current_Sum+= nums[i];

        if(current_Sum>maxSum)
          maxSum=current_Sum;
        else if (current_Sum<0) 
        {
          current_Sum=0;
        }
        return maxSum;
      }
    }
};
