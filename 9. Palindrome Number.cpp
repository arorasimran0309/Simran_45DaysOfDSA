class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long orig=x;
        long rev=0;
        
        while(x)
        {
            long ld = x%10;
            rev=rev*10 + ld;
            x/=10;
        }
        if(orig==rev)
            return true;
        return false;
    }
};
