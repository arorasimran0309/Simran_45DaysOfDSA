class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = ((n*(n+1))/2);
        for(int i=0; i<n; i++)
            sum-=nums[i];
        return sum;
    }
};

//OR

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++)
            ans = ans ^ nums[i] ^ (i+1);       
        return ans;
    }
};
