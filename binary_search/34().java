class Solution
{
  public int[] searchRange(int[] nums.int target)
  {
    int lo = 0, hi = arr.length;
    int[] narr = new int(arr.length);
    ArrayList<Integer> list = new ArrayList<Integer>();
    while(lo<=hi)
    {
      int mid = left+(right-left)/2;
      
      if(arr[mid] == target)
      {

      }
      else if(arr[mid] > target) lo = mid+1;
      else hi = mid-1;
    }
    return {list.get(0),list.get(list.size())};
  }
} 
