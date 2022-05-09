class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
int n = heights.size();
        int ans=0;
        if(n==1)
        {
            return heights[0];
        }
        //For prev small vector
        vector<int>vec;
        
        vec.push_back(-1);
        
        stack<pair<int, int> > s;
        s.push({ heights[0],0 });
        
         //For Prev Small
        for(int i=1;i<n;i++)
        {
            if(heights[i] <= s.top().first)
            {
                while((s.empty()==false) && (heights[i] <= s.top().first))
                {
                    s.pop();
                }
                
                if(s.empty()==true)
                {
                    vec.push_back(-1);
                    s.push({heights[i],i});
                }
                else if(s.empty()==false)
                {
                    vec.push_back(s.top().second);
                    s.push({heights[i],i});
                }
            }
            else
            {
                    vec.push_back(s.top().second);
                    s.push({heights[i],i});
            }
        }
       
         stack<pair<int,int>> s1;
        
//         //For next small vector
        vector<int> next;
        next.push_back(n);
        
        s1.push({heights[n-1],n-1});
        
//         //For Next Small
        for(int i=n-2;i>=0;i--)
        {
            if(heights[i]<=s1.top().first)
            {
                while((s1.empty()==false) && (heights[i] <= s1.top().first))
                {
                    s1.pop();
                }
                
                if(s1.empty()==true)
                {
                    next.push_back(n);
                    s1.push({heights[i],i});
                }
                else if(s1.empty()==false)
                {
                    next.push_back(s1.top().second);
                    s1.push({heights[i],i});
                }
            }
            else
            {
                    next.push_back(s1.top().second);
                    s1.push({heights[i],i});
            }
        }
        
        
        reverse(next.begin(),next.end());
       
         
        for(int i=0;i<n;i++)
        {
            int rem = (next[i]- vec[i] -1)*heights[i];
            ans = max(ans,rem);
        }
        return ans;
    }
};
