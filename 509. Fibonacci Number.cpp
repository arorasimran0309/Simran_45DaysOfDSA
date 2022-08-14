class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        return (fib(n-1) + fib(n-2));
        
        /*
        vector<int> fibs;
        fibs.push_back(0);
        fibs.push_back(1);
        for(int i=2; i<=n; i++)
        {
            fibs.push_back(fibs[i-1]+fibs[i-2]);
        }
            
        return fibs[n];
        */
    }
};
