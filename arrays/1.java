import java.util.*;
class Solution 
{
  public static int[] twoSum(int nums[],int target)
  {
    HashMap <Integer,Integer> map = new HashMap<>();
    for(int i = 0;i<nums.length;i++)
    {
      int c = target-nums[i];
      if(map.containsKey(c))
      {
        return new int[]{map.get(c),i};
      }
      map.put(nums[i],i);
    }
    return null;
  }
  public static void main(String ar[])
  {
    int nums[]={2,7,11,15};
    int target = 9;
    System.out.print(Arrays.toString(twoSum(nums,target)));
  }
}
