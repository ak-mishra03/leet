class Solution 
{
    public int maxScore(String s) 
    {
      int left = 0, right = left+1,psum = 0,riyalsum=0;
      while(right<s.length())
      {
        int cnt0=0,cnt1=0;
        int nsum = 0;
        for(int i = left;i<right;i++)
        {
          if(s.charAt(i)=='0') cnt0++;
        }
        for(int i = right;i<s.length();i++)
        {
          if(s.charAt(i)=='1') cnt1++;
        }
        right++;
        nsum =nsum+ cnt1+cnt0;

        riyalsum = Math.max(psum,nsum);
        psum = riyalsum;


      }
      return riyalsum;
      
    }
}
