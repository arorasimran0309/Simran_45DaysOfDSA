class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int rows= matrix.size();
        int cols= matrix[0].size();
        int rowin[rows];
        int colin [cols];
        
        for(int i=0; i<rows; i++)
            rowin[i]=1;
        for(int j=0; j<cols; j++)
            colin[j]=1;
        
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
                if(matrix[i][j]==0)
                {
                    rowin[i]=0;
                    colin[j]=0;
                }
        }
        
        for(int i=0; i<rows; i++)
        {
            if(rowin[i]==0)
                for(int j=0; j<cols; j++)
                    matrix[i][j]=0;
        }
        
        for(int j=0; j<cols; j++)
        {
            if(colin[j]==0)
                for(int k=0; k<rows; k++)
                    matrix[k][j]=0;
        }
    }
};
