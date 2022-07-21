class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {        
        int l=0, r=cardPoints.size()-k;
        int total = 0;
        int res = 0;
        
        for(int i=r; i<cardPoints.size(); i++)
            total+=cardPoints[i];
        
        res = total;
        
        while(r<cardPoints.size())
        {
            total+=(cardPoints[l]-cardPoints[r]);
            res = max(total,res);
            l++; r++;
        }
        return res;
    }
};
