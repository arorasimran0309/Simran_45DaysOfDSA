class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mpp;
        while(mpp.find(n)==mpp.end())
        {
            mpp[n]=1;
            int sum=0;
            while(n)
            {
                sum += (n%10)*(n%10);
                n /=10;
            }
            if(sum==1)
                return true;
            n=sum;
        }
        return false;
    }
};
