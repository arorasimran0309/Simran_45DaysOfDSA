class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        for(int i=0; s[i]!=NULL;)
        {
            if(mpp[s[i]]>=mpp[s[i+1]])
            {
                ans+=mpp[s[i++]];
            }
            else
            {
                ans+=(mpp[s[i+1]]-mpp[s[i]]);
                i+=2;
            }   
        }
        return ans;
    }
};
