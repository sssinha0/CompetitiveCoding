#include<bits/stdc++.h>
using namespace std;
    void fill(vector<vector<char> > &grid,int i,int j,int index,int n){
        if(grid[i][j]=='1'){
            grid[i][j]=(char)index;
        if((j+1)<n&&grid[i][j+1]=='1')
        fill(grid,i,j+1,index,n);
       if((j-1)>=0&&grid[i][j-1]=='1')
        fill(grid,i,j-1,index,n);
        if((i+1)<n&&grid[i+1][j]=='1')
        fill(grid,i+1,j,index,n);
        if((i-1)>=0&&grid[i-1][j]=='1')
        fill(grid,i-1,j,index,n);
        }else{
            return;
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int index=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    fill(grid,i,j,index,n);
                    index++;
                }
            }
        }
            return index-2;
    }
int main(){
    vector<vector<char>> grid={{'1'},{'1'}};
    int k=numIslands(grid);
    cout<<k;
    return 0;
}