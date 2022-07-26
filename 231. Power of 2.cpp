class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        if(n==1)
            return true;
        while(n>1)
        {
            if(n%2!=0)
                return false;
            else n/=2;
        }
        return true;
    }
};

//or

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1 || ceil(log2(n)) != floor(log2(n)))
            return false;
        else
            return true;
    }
};
