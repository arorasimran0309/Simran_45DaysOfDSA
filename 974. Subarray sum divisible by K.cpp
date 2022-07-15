class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int s = 0;
        int ans = 0;
                
        for(int i=0; i<nums.size(); i++)
        {
            s+=nums[i];
            int rem;
            rem=(s%k + k)%k;
            if(mpp.find(rem)==mpp.end())
            {
                mpp[rem]=1;
            }
            else
                mpp[rem]++;
        }
        for(int i=0; i<k; i++)
        {
            if(mpp.find(i)!=mpp.end())
            {
                if(i==0)
                    ans+=((mpp[i]*(mpp[i]-1))/2)+mpp[i];
                else
                    ans+=((mpp[i]*(mpp[i]-1))/2);
            }
        }
        
        return ans;
    }
};
