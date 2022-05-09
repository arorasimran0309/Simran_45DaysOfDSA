class Solution {
public:
    bool validPalindrome(string s) {
        auto f = [](string &s, int l, int r){
            for(; l < r && s[l] == s[r]; l++, r--);
            return l >= r;
        };
        int l = 0, r = s.size() - 1;
        for(; l < r && s[l] == s[r]; l++, r--);
        return l >= r || f(s, l+1, r) || f(s, l, r-1);
    }
};
