class Solution 
{
public:
    bool isPalindrome(string s)
    {
        int start = 0, end = s.length() - 1;
        return checkPalindrome(s, start, end);
    }

    bool checkPalindrome(const string &s, int start, int end)
    {
        if (start >= end) return true;

        if (!isalnum(s[start]))
            return checkPalindrome(s, start + 1, end);

        if (!isalnum(s[end]))
            return checkPalindrome(s, start, end - 1);

        if (tolower(s[start]) != tolower(s[end]))
            return false;

        return checkPalindrome(s, start + 1, end - 1);
    }
};

