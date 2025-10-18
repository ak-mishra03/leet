class Solution {
public:
    string majorityFrequencyGroup(string s) 
    {
        unordered_map<char,int> charf;
        unordered_map<int, vector<char>> freqg;
        int maxgrsize =0, maxfreq=0;

        for(char c: s)
            charf[c]++;

        for(const auto& [ch,freq]:charf)
            freqg[freq].push_back(ch);
        
        for(const auto& [freq,chars]: freqg)
        {
            int groupSize = chars.size();
            if(groupSize > maxgrsize || (groupSize == maxgrsize && freq > maxfreq))
            {
                maxgrsize =groupSize;
                maxfreq=freq;
            }
        }

        string result;
        for(char ch: freqg[maxfreq])
            {
                result.push_back(ch);
            }
        return result;
    }
};
