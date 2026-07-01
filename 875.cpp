class Solution {
  public:
    int minEatingSpeed(vector<int> &piles, int h) {
      int left = 1; 
      int right = *max_element(piles.begin(),
          piles.end()); 

      while (left <= right) 
      {
        int mid = left + (right - left) / 2;

        if (canEatTime(piles, h, mid)) 
          right = mid - 1;
        else
          left = mid +1; 
      }
      return left;
    }

    bool canEatTime(vector<int> &piles, int h,int k) 
      {
        int div = 0;
        long sum = 0;
        for (int p : piles) {
          div = ceil(double(p) / k);
          sum += div;
        }

        if (sum <= h)
          return true;
        else {
          return false;
        }
      }
};
