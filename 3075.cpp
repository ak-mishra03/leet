class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<>());
        int minfactor=0;
        long long maxhap=0;
            for(int i =0;i<k;i++){
                if(happiness[i]-minfactor<0){
                    // maxhap+=happiness[i];
                    minfactor++;
                }
                else{
                    maxhap+=happiness[i]-minfactor;
                    minfactor++;
                }
            }
        return maxhap;
    }
};
