class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        if (n < 11) {
            return {n};
        }
        int dig = countDigits(n);
        int t = dig;
        while (n > 0) {
            if (n % 10 == 0) {
                n /= 10;
                t--;
            } else {
                res.push_back((n % 10) * pow(10, dig - t));
                n /= 10;
                t--;
            }
        }
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }

    int countDigits(int n) {
        int dig = 0;  
        while (n > 0) {
            dig += 1;
            n /= 10;
        }
        return dig;
    }
};

