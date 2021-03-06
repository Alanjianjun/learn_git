class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0||gird[0].size()==0) return 0;
        int rows=grid.size(),cols=grid.at(0).size();
        auto dp=vector<vector<int>>(rows,vector<int>(cols));
        dp[0][0]=grid[0][0];
        for(int i =1;i<rows;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int j=1;j<cols;j++){
            dp[0][j]=dp[0][j-1]+grid[0][j];
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[rows-1][cols-1];
    }
};
