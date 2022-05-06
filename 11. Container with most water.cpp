class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int curr = 0;
        int left = 0;
        int right = height.size()-1;
        while(left<right)
        {
            curr=(right-left)*(min(height[left], height[right]));
            (height[left]<height[right])?left++:right--;
            maxwater=curr>maxwater?curr:maxwater;
        }
        return maxwater;                              
    }
};
