import java.util.*;

class Main
{
  public static void main(String ar[])
  {
    Solution ob = new Solution();
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    System.out.println(ob.lengthOfLongestSubstring(s));
  }
}
class Solution 
{
    public int lengthOfLongestSubstring(String s) 
    {
        HashSet<Character> set = new HashSet<>();
        int max = 0, left = 0;

        for (int right = 0; right < s.length(); right++) 
        {
            while (set.contains(s.charAt(right))) 
            {
                set.remove(s.charAt(left));
                left++;
            }
            set.add(s.charAt(right));
            
            max = Math.max(max, right - left + 1);
        }

        return max;
    }
}

