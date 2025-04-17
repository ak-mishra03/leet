class Solution {
    public int[] sortedSquares(int[] nums) {
        int j = -1;
        int[] numsSorted = new int[nums.length];

        for (int i=0; i<nums.length-1; i++) {
            if (nums[i] < 0 && nums[i+1] >=0) {
                //System.out.println(i);
                j = i;
                break;
            }
        }

        // Check for all -ve numbers in the I/P array, e.g. nums = {-5,-3,-2,-1}
        if ((j == -1) && (nums[0] < 0)) {
            for (int l=0; l<nums.length; l++) {
                numsSorted[l] = -1*nums[nums.length-1 - l];
            }
        }
        else if ( j == -1 && (nums[0] >=0)) {  // Check for all +ve numbers in the I/P array, e.g. nums = {1,2,3}
            for (int l=0; l<nums.length; l++) {
                numsSorted[l] = nums[l];
            }
        }

        else {

            int k = j + 1;
            int i = 0;

            while (j >= 0 && k < nums.length) {

                if (-1 * nums[j] < nums[k]) {
                    numsSorted[i] = -1 * nums[j];
                    i++;
                    j--;
                } else if (-1 * nums[j] >= nums[k]) {
                    numsSorted[i] = nums[k];
                    i++;
                    k++;
                }
            }

            while (j >= 0) {
                numsSorted[i] = -1 * nums[j];
                i++;
                j--;
            }

            while (k < nums.length) {
                numsSorted[i] = nums[k];
                i++;
                k++;
            }
        }

        for (int l=0; l<numsSorted.length; l++) {
            numsSorted[l] *= numsSorted[l];
        }

        return numsSorted;
    }
}
