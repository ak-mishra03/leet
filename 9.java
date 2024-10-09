import java.util.*;
class Solution
{
  public static void main(String ar[])
  {
    Scanner sc  = new Scanner(System.in);
    int x = sc.nextInt();
    System.out.print(isPalindrome(x));
  }
  public static boolean isPalindrome(int n)
  {
    int rev = 0 , temp = n;
    while(temp>0)
    {
      rev = (rev*10)+(temp%10);
      temp/=10;
    }
    if(rev == n)
    {
      return true;
    }
    else 
    {
      return false;
    }
  }
}
