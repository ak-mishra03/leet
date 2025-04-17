class Solution
{
  public int arraySign(int[] nums)
  {
    int prod = 1;
    for(int i:nums)
    {
      if(i==0) return 0;
      else if(i>0) prod*=1;
      else prod*=-1;
    }
    return prod;
  }
}
