class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<vector<int>> arr;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    arr.push_back({i,j});
                }
            }
        }
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<n;j++){
                matrix[arr[i][0]][j]=0;
            }
            for(int j=0;j<m;j++){
                matrix[j][arr[i][1]]=0;
            }
        }
    }
};