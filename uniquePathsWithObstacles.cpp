class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m=obstacleGrid.size(),n=obstacleGrid.at(0).size();
        int mat[m][n];
       
       //处理两边的初始值，一旦有障碍，后面值都为0
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0]==1){
                for(int j=i;j<m;j++){mat[j][0]=0;}
                break;
            }else{
                mat[i][0]=1;
            }
        }
        //处理两边的初始值，一旦有障碍，后面值都为0
        for(int i=0;i<n;i++){
            if(obstacleGrid[0][i]==1){
                for(int j=i;j<n;j++){mat[0][j]=0;}
                break;
            }else{
                mat[0][i]=1;
            }
        }
        //如果本身是障碍，就为0，不然就等于左边和上边的和
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1){
                    mat[i][j]=0;
                }else{
                    mat[i][j]=mat[i][j-1]+mat[i-1][j];
                }
                
            }
        }
        return mat[m-1][n-1];
    }
};