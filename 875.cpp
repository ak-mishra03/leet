class Solution 
{
  public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
      int left= 1;                                                // not zero because eating speed can never be zero
      int right = *max_element(piles.begin(),piles.end());        // the eating speed needs not to be more than the max pile of bananas

      while(left<=right)                                 // binary search to the optimal eating speed
      {
        int mid = left+(right-left)/2;

        if(canEatTime(piles,h,mid))                      // if u can eat all the piles in <=h time with k speed then you can obviously eat all the piles in <h time with k+n speed
          right = mid-1;
        else
          left = mid+1;                                                 // if u cant eat in <=h time then u need to check uppper speeds
      }
      return left;
    }

    bool canEatTime(vector<int>& piles,int h, int k)                    // check if u can eat the piles in <=h time with k speed
    {
      int div = 0;
      long sum = 0;
      for(int p: piles)
      {
        div = ceil(double(p)/k);
        sum += div;
      }

      if(sum<=h)
        return true;
      else {
        return false;
      }
    }
};

