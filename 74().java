//search a 2d matrix
import java.util.*;
class Solution
{
  public static int searchMatrix(int[][] matrix,int target)
  {
    return matrix.length;
  }
  public static void main(String ar[])
  {
    Scanner sc = new Scanner(System.in);
    int[][] nums = {{1,3,5,7},{10,11,16,20},{23,30,34,6}};
    int target = sc.nextInt();
    System.out.println(searchMatrix(nums,target));
  }
}
