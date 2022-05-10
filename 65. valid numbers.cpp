class Solution {
bool isDigital(string s, bool dot) {
        int i= (s[0]=='-' || s[0]=='+')?0:-1, cnt=0;
        while(++i<s.size() && isdigit(s[i])) cnt++;
        if (dot) {
            if (i==s.size() || s[i]!='.') return false;
            while(++i<s.size() && isdigit(s[i])) cnt++;
        }
        return cnt>0 && i==s.size();
    }
    
public:
    bool isNumber(string s) {
        auto it=find_if(s.begin(), s.end(), [](char c){return c=='e'||c=='E';});
        auto it2=find_if(s.begin(), it, [](char c){return c=='.';});
        
        bool res = false;
        if (it==s.end())             //without 'e'
            res = isDigital(s, it2!=it);               
        else 
            res = isDigital(s.substr(0, it-s.begin()), it2!=it) 
                        && isDigital(s.substr(it-s.begin()+1), false);
            
        return res;
    }
};
