import java.util.*;
class Solution
{
  public int [] productExceptSelf(int []nums)
  {
    int prod = 1;
    int [] prodarr = new int(nums.length);
    for(int i = 0;i<nums.length;i++)
    {
      int k = i;
      if(k == i)
      {
        continue;
      }
      prod *= nums[i];
    }
    prodarr[k]=prod;
    if(k<nums.length)
    {
      productExceptSelf()
    }
  }
}
class Main
{
  public static void main(String ar[])
  {
    Scanner sc = new Scanner(System.in);
    int nums[]={1,2,3,4};
    Solution obj = new Solution();
    System.out.print(Arrays.toString(obj.productExceptSelf(nums)));
  }
}     
