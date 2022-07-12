class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int strl=strs.size();
        if(1==strl)
            return strs[0];
        
        int common_len=numeric_limits<int>::max();
        for(const auto& s:strs)
            common_len=min(common_len,static_cast<int>(s.size()));
        
        const auto& first_str=strs[0];
        for(int i=0;i<common_len;++i) {
            const char c=first_str[i];
            for(int j=1;j<strl;++j)
                if(c!=strs[j][i])
                    return first_str.substr(0,i);
        }
        return first_str.substr(0,common_len);
    }
};
