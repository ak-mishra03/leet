class Solution
{
  public boolean checkIfPangram(String sentence)
  {
    HashSet<Character> set = new HashSet<Character>();
    int count =0;
    for(int i = 0 ;i<sentence.length();i++)
    {
      if(!set.contains(sentence.charAt(i)))
      {
        set.add(sentence.charAt(i));
        count++;
      }    
    }
    if(count == 26) return true;
    else return false;
  }
}

class Solution {
  public boolean checkIfPangram(String sentence) {
    int seen = 0;

    for (final char c : sentence.toCharArray())
      seen |= 1 << c - 'a';

    return seen == (1 << 26) - 1;
  }
}

