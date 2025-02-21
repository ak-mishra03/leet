class Solution 
{
    public int majorityElement(int[] nums) 
    {
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();

        for(int i:nums)
        {
            if(!map.containsKey(i))
            {
                map.put(i,1);
            }
            else 
            {
                int ov = map.get(i);
                int nv = ov+1;
                map.put(i,nv);
            }
        }
         int majorityElement = -1;
        int maxCount = 0;
           for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxCount) {
                maxCount = entry.getValue();
                majorityElement = entry.getKey();
            }
        }

        return majorityElement;
       
    }
}
