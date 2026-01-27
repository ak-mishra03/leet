class Solution {
public:
  void sortColors(vector<int> &nums) {
    // int p =0,n=0;
    //
    // vector<int> table(3,0);
    //
    // for(int i= 0;i<nums.size();i++)
    // {
    //   table[nums[i]]++;
    // }
    //
    // for(int i=0;i<3;i++)
    // {
    //   if(table[i]>0)
    //   {
    //     p+=table[i];
    //     for(int j =n;j<p;j++)
    //     {
    //       nums[j]=i;
    //     }
    //     n=p;
    //   }
    // }

    int lo = 0, mid = 0, hi = nums.size() - 1;

    while (mid <= hi) {
      if (nums[mid] == 0) {
        swap(nums[mid], nums[lo]);
        mid++;
        lo++;
      } else if (nums[mid] == 1)
        mid++;
      else if (nums[mid] == 2) {
        swap(nums[hi], nums[mid]);
        hi--;
      }
    }
  }
};
