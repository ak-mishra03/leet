class Solution
{
  public int[] dailyTemperatures(int[] tempratures)
  {
    int lo = 0,hi =1;
    Stack<Integer> stk = new Stack<>();
    int[] result = new result[temperatures.length];
    while(lo<temperatures.length)
    {
      if(hi==temperatures.length)
      {
        lo++;
        hi=lo+1;
        stk.push(0);
      }
      else if(temperatures[hi] > temperatures[lo])
      {
        stack.push(hi-lo);
        lo++;
        hi = lo+1;
      }
      else
      {
        hi++;
      }
    }
    for(int i = temperatures.length -1;i>-1;i--)
    {
      result[i] = stk.pop();
    }
    return result;
  }
}

