class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());

        int curr = 0;
        int i = 1;
        int freq = 1, maxfreq = 1;
        int temp =k;
        while (curr < nums.size()) {
            if (i < nums.size()) {
                if (nums[curr]-nums[i]<=k && k>=0) {
                    freq++;
                    maxfreq = max(maxfreq, freq);
                    i++;
                    k-=nums[curr]-nums[i];
                } else {
                    freq = 1;
                    curr++;
                    i += curr;
                    k=temp;
                }
            } else {
                curr++;
                i += curr;
                k=temp;
            }
        }
        return maxfreq;
    }
};

