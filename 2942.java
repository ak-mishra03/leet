class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) 
    {
        ArrayList<Integer> l = new ArrayList<Integer>();
        int idex = 0;
        for(String word : words)
        {
            for(int i = 0; i<word.length();i++)
            {
                if(x == word.charAt(i))
                {
                    l.add(idex);
                    break;
                }
            }
            idex++;
        }
        return l;
    }
}
