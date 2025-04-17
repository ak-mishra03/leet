import java.util.*;
class Solution
{
  public static void main(String ar[])
  {
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    System.out.print(mySqrt(x));

  }
  public static int mySqrt(int x)
  {
    int left = 1;
    int right = x;
    int cek = (left+right)/2;
    int sq=0;
    while(cek*cek>x)
    {
      right = cek;
      cek = (left+right)/2;
    }
    for(int i = cek;i<=right;i++)
    {
      if(i*i<=x)
      {
        sq= i;
      }
    }
    return sq;
  }
}

  // public static int mySqrt(int x)
  // {
  //   int i=1,count = 0;
  //   while(x-i>=0)
  //   {
  //
  //     x = x - i;
  //     count++;
  //     i+= 2;
  //   }
  //   return count;
  //
  // }


//8 = 2.something,,, =>2
//4 =>2
