class Solution {
  public:
    bool isValid(string s) {
      stack<char> st;
      unordered_map<char,char> map= {{'(',')'},{'{','}'},{'[',']'}};
      for(char c : s){
        if(c=='(' || c=='[' || c == '{'){
          st.push(c);
        }
        else {
            if(st.empty()) return false;
            if(map[st.top()] == c){
                st.pop();
            }
            else {
                return false;
            }
        }
      }
      return st.empty();
    }
};

