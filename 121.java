class Solution 
{
    public int maxProfit(int[] prices) 
    {   
        int buy = prices[0],rt = 0;
        for(int i = 1;i<prices.length;i++)
        {
            if(buy>prices[i])
            {
                buy = prices[i];
            }
            else
            {
                rt = Math.max(rt,prices[i]-buy);
            }
        }
        return rt;
    }
}
