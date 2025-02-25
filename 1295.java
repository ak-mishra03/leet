// class Solution
// {
//   public int findNumbers(int[]nums)
//   {
//     int c = 0;
//     for(int i : nums)
//     {
//       String s = Integer.toString(i);
//       if(s.length()%2 == 0)
//       {
//         c++;
//       }
//     }
//     return c;
//   }
// }
class Solution {
    public int findNumbers(int[] nums) {

        int n = nums.length;
        int res_count =0;

        for(int i=0;i<n;i++)
        { 

            int count =0;
            int temp = nums[i];
            while(temp > 0)
            {
        
                count++;
                temp = temp /10;
            }

            if(count % 2 ==0)
            {
                res_count++;
            }
        }

        return res_count;
        
    }
}
