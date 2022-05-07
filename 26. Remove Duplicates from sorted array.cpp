class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr = 0;
        for(int ele=1; ele<nums.size(); ele++)
        {
            if(nums[ele]!=nums[ptr])
            {
                ptr++;
                nums[ptr]=nums[ele];
            }
        }
        return (ptr+1);
    }
};
