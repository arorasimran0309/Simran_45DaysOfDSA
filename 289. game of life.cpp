class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        
        vector<int>v1={1,1,0,-1,-1,-1,0,1};
        vector<int>v2={0,1,1,1,0,-1,-1,-1};
        
        vector<vector<int>>temp=board;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int liveCellCount=0;
                for(int x=0;x<v1.size();x++)
                {
                    int newXCord=i+v1[x];
                    int newYCord=j+v2[x];
                 if(newXCord>=0 && newXCord < row && newYCord>=0 && newYCord<col)
                 {
                     if(temp[newXCord][newYCord]==1)
                         liveCellCount++;    
                 }
                }       
                if(temp[i][j]==0 && liveCellCount==3)
                    board[i][j]=1;
                else if(temp[i][j]==1 && liveCellCount<2 || liveCellCount>3)
                    board[i][j]=0;    
            }
        }
    return ;
    }
};
