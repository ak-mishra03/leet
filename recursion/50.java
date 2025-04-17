class Solution
{
  public double myPow(double x, int n)
  {
    double result = 1;
    if(n==0)
    {
      return result;
    }
    else
    {
      if(n>0)
      {
        result *=x;
        myPow(x,n--);
      }
      else
      {
        result /= x;
        myPow(x,n++);
      }
    }
  }
}
