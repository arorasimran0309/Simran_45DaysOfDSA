//Moore's sorting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(count == 0)
                ele = nums[i];
            if(ele == nums[i])
                count++;
            else
                count--;
        }
        return ele;
    }
};

/* OR
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int midele;
        sort(nums.begin(),nums.end());
        midele=nums[nums.size()/2];
        
        return midele;
    }
};
*/

/* OR
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int arr[max+1];
        for(int i=0; i<max+1; i++)
        {
            arr[i]=0;
        }
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<0)
                continue;
            arr[nums[i]]++;
        }
        
        for(int i = 0; i<max+1; i++)
        {
            if(arr[i]>nums.size()/2)
                return i;
        }
        return 0;
    }
};
*/
