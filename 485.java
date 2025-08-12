class Solution
{
  public int findMaxConsecutiveOnes(int[] nums)
  {   
      int count =0,nones = 0;
      for(int i: nums)
      {
        if(i==1)
        {
          count++;
          if(count > nones) nones = count;
        }
        else
        {
            count=0;;
        }
      }
      return nones;
  }
}
