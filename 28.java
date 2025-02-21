class Solution 
{

    public static void main(String ar[])
    {
      String haystack = "mississippi";
      String needle = "issip";
      System.out.println(strStr(haystack,needle));
    }
    public static int strStr(String haystack, String needle) 
    {
      haystack = haystack + " ";
      needle = needle + " ";
      int nlen = needle.length();
      int hlen = haystack.length();
      int nh = 1,hh = 1,nl = 0,hl = 0,cnt = 0;
      while(hh<=hlen)
      {
        if(needle.substring(nl,nh).equalsIgnoreCase(haystack.substring(hl,hh)))
        {
          System.out.println(needle.substring(nl,nh)+" "+ haystack.substring(hl,hh));
          nh++;
          hh++;
          cnt++;
          System.out.println(cnt+" "+(nlen-1));
          if(cnt == nlen-1) return hl;
        }
        else
        {
          nl = 0;
          nh = 1;
          hl = hh;
          hh++;
          cnt = 0;
        }
        System.out.println(hl+" "+hlen);

      }
      return -1;
    }
} 


