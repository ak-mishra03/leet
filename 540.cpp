// class Solution {
//   public:
//     int singleNonDuplicate(vector<int>& nums) {;;
//       int l = 0,r= nums.size()-1;
//       if(nums.size() ==1) return nums[0];
//       while(l<=r){
//         int mid = (l+r)/2;
//         if(l==r) return nums[mid];

//         if(mid%2==1 && nums[mid]==nums[mid-1]) {
//           l = mid+1;
//           cout<<"o1";
//         }
//         else if(mid%2==1 && nums[mid]==nums[mid+1]) {
//           r=mid-1;
//           cout<<"o2";
//         }
//         else if(mid%2==0 && nums[mid]==nums[mid+1]) {
//           l = mid+1;
//           cout<<"e1";
//         }
//         else if(mid%2==0 && nums[mid]==nums[mid-1]) {
//           r = mid;
//           cout<<"e2";
//         }

//         else return nums[mid];
//       }
//       return -1;
//     }
// };



class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1])
                l = mid + 2;
            else
                r = mid;
        }

        return nums[l];
    }
};
