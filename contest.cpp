class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long total_sum = 0;
        for(int i = 0;i<k;i++){
            if(mul>0){
                total_sum+= (long long)nums[i]*mul;
            } else{
                total_sum+= nums[i];
            }
            mul--;
        }
        return total_sum;
    }
};



