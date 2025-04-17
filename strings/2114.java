class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxWords = sentences[0].split(" ").length;
        
        for(int i = 1; i < sentences.length; i++) {
            int words = sentences[i].split(" ").length;
            if(words > maxWords) maxWords = words;
        }

        return maxWords;
    }
}
