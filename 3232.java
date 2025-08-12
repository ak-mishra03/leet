class Solution
{
  public boolean canAliceWin(int[] nums)
  {
    int ssum= 0, dsum=0;
    for(int i:nums)
    {
      if(i<10) ssum+=i;
      else dsum+=i;

    }
    return (ssum==dsum)?false: true;
  }
}
