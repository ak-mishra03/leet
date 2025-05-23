class Solution 
{
    Map<Integer,Integer> memo = new HashMap<Integer,Integer>();
    public int fib(int n) 
    {
        
        if(n == 0 || n ==1) return n;
        if(memo.containsKey(n))
        {
            return memo.get(n);
        }

        int result = fib(n-1) + fib(n-2);

        memo.put(n,result);

        return result;
        
    }
}
