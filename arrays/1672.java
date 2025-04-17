class Solution 
{
    public int maximumWealth(int[][] accounts) 
    {
        int s = 0, fs = 0;
        for(int i = 0;i<accounts.length;i++)
        {
            for(int j = 0;j<accounts[i].length;j++)
            {
                s = s+accounts[i][j];
            }
            fs = Math.max(s,fs);
            s=0;
        }    
        return fs;
    }
}
