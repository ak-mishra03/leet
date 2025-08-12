class Solution 
{
    public char nextGreatestLetter(char[] letters, char target) 
    {
      int left = 0, right = letters.length;

      while(left<=right)
      {
        int mid = left+ (right-left)/2;
        if(letters[mid] > target) return letters[mid];

        else if(letters[mid] > target) left = mid +1;

      }
      return letters[0];
        
    }
}
