class Solution {
public:
   int ans=0;
void func1(int low, int mid, int high, vector<int>& nums)
{
    int cnt=0;
    int k=mid,k1=high;
    while(k>=low)
    {
        while(k1>=(mid+1) && nums[k]<=(long long int)2*nums[k1])
        {
            k1--;
        }
        cnt+=k1-(mid+1)+1;
        k--;
    }
    ans+=cnt;

}
void func(int low, int high, vector<int>& nums)
{
    
    if(low==high)
        return ;
    int mid=low+(high-low)/2;
    
    func(low,mid,nums);
    func(mid+1,high,nums);
   
    func1(low,mid,high,nums);
    
    vector<int>v1,v2;
    for(int i=low;i<=mid;i++)
        v1.push_back(nums[i]);
    
    for(int i=mid+1;i<=high;i++)
        v2.push_back(nums[i]);
    
    int k1=0,k2=0,k=low;
    while(k1<v1.size() && k2<v2.size())
    {
        if(v1[k1]<v2[k2])
            nums[k++]=v1[k1++];
        else
            nums[k++]=v2[k2++];
    }
    
    if(k1==v1.size())
    {
        while(k2<v2.size())
        {
            nums[k++]=v2[k2++];
        }
    }
    if(k2==v2.size())
    {
        while(k1<v1.size())
        {
            nums[k++]=v1[k1++];
        }
    }
}
int reversePairs(vector<int>& nums) {
     func(0,nums.size()-1,nums);
    
    return ans;
}
};
