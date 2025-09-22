class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> parentheses; // should store char, not int

        for (char c : s) 
        {
            if (c == '(' || c == '[' || c == '{') 
            {
                parentheses.push(c);
            } 
            else 
            {
                // if stack empty, invalid
                if (parentheses.empty()) return false;

                // check matching
                if ((c == ')' && parentheses.top() == '(') ||
                    (c == '}' && parentheses.top() == '{') ||
                    (c == ']' && parentheses.top() == '[')) 
                {
                    parentheses.pop(); // remove matched opening
                } 
                else 
                {
                    return false; // mismatch found
                }
            }
        }

        return parentheses.empty(); // valid if nothing remains
    }
};

