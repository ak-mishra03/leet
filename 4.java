// import java.util.*;
// class Main
// {
//   public static void main(String ar[])
//   {
//     Scanner sc = new Scanner(System.in);
//     int [] nums1 = {1,2};
//     int [] nums2 = {3,4};
//     Solution ob = new Solution();
//     System.out.print(ob.findMedianSortedArrays(nums1,nums2));
//   }
// }
// class Solution 
// {
//     public double findMedianSortedArrays(int[] nums1, int[] nums2) 
//     {
//       int m = nums1.length;
//       int n = nums2.length;
//       int mn = m+n;
//       int [] nums3 = new int[m+n];
//       for(int i = 0;i<m;i++)
//       {
//         nums3[i]= nums1[i];
//       }
//       for(int i=0;i<n;i++)
//       {
//         nums3[m+i]=nums2[i];
//       }
//       Arrays.sort(nums3);
//       double median = 0;
//       if((mn)%2 == 0)
//       {
//         median = (nums3[mn/2]+nums3[(mn/2)-1])/2.0;
//       }
//       else
//       {
//         median = nums3[mn/2];
//       }
//       return median;
//     }
// }
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        // Ensure nums1 is the smaller array
        if (nums1.length > nums2.length) {
            int[] temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }

        int m = nums1.length;
        int n = nums2.length;
        int low = 0, high = m;

        while (low <= high) {
            int partition1 = (low + high) / 2; // Partitioning nums1
            int partition2 = (m + n + 1) / 2 - partition1; // Partitioning nums2

            // Handle edge cases
            int maxLeft1 = (partition1 == 0) ? Integer.MIN_VALUE : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? Integer.MAX_VALUE : nums1[partition1];

            int maxLeft2 = (partition2 == 0) ? Integer.MIN_VALUE : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? Integer.MAX_VALUE : nums2[partition2];

            // Check if we have found the correct partition
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // We have partitioned the arrays correctly
                if ((m + n) % 2 == 0) { // Even length
                    return (Math.max(maxLeft1, maxLeft2) + Math.min(minRight1, minRight2)) / 2.0;
                } else { // Odd length
                    return Math.max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                // We are too far on the right side for partition1, go left
                high = partition1 - 1;
            } else {
                // We are too far on the left side for partition1, go right
                low = partition1 + 1;
            }
        }

        // If we reach here, it means input arrays were not sorted
        throw new IllegalArgumentException("Input arrays are not sorted");
    }
}

