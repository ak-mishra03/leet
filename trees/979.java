import java.util.*;

class Binary {
  public static void main(String ar[]) {
    Scanner sc = new Scanner(System.in);
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = sc.nextInt();
    System.out.println(search(nums, target));
  }

  public static int search(int nums[], int target) {
    int l = 0; // Start from index 0
    int r = nums.length - 1; // End at the last index
    while (l <= r) { // Continue until l is greater than r
      int mid = l + (r - l) / 2; // Calculate the middle index

      if (target > nums[mid]) { // Compare with the value at mid
        l = mid + 1; // Move to the right half
      } else if (target < nums[mid]) {
        r = mid - 1; // Move to the left half
      } else {
        return mid; // Target found, return the index
      }
    }
    return -1; // Target not found
  }
}

