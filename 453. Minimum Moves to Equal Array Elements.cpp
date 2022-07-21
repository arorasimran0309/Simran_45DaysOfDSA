class Solution {
public:
    int minMoves(vector<int>& nums) {
        int smallest = *min_element(nums.begin(),nums.end());
        int moves=0;
        for(int i=0; i<nums.size(); i++)
        {
            moves+= nums[i]-smallest;
        }
        return moves;
    }
};
