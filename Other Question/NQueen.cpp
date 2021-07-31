#include<bits/stdc++.h>
using namespace std;

// bool isSafe(int mat[][10],int i,int j,int n){
//     for(int k=0;k<i;k++){
//         if(mat[k][j]==1){
//             return false;
//         }
//     }
//     int x=i;
//     int y=j;
//     while(x>=0&&y>=0){
//         if(mat[x][y]==1)
//             return false;
//         x--;
//         y--;
//     }
//     x=i;
//     y=j;
//     while(x>=0&&y<n){
//         if(mat[x][y]==1)
//             return false;
//         x--;
//         y++;
//     }
//     return true;
// }
// bool solveNQueen(int mat[][10],int i,int n){
// if(i==n){
//     //try to finish and 
//     for(int i=0;i<n;i++){
//         for(int j=0;i<n;j++){
//             if(mat[i][j]==1)
//                 cout<<"Q ";
//             else
//                 cout<<"_ ";
//         }
//         cout<<endl;
//     }
//     return true;
// }
// for(int j=0;j<n;j++){
//     if(isSafe(mat,i,j,n)){
//         mat[i][j]=1;
//             bool solve=solveNQueen(mat,i+1,n);
//             if(solve)
//                 return true;
//             mat[i][j]=0;  //backtracking
//     }

// }
// return false;
// }
bitset<30> col,d1,d2;
void solve(int r,int n,int &ans){
    if(r==n){
        ans++;
        return;
    }
    for(int c=0;c<n;c++){
        if(!col[c]&&!d1[r-c+n-1]&&!d2[r+c]){
            col[c]=d1[r-c+n-1]=d2[r+c]=1;
            solve(r+1,n,ans);
              col[c]=d1[r-c+n-1]=d2[r+c]=0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    // int mat[10][10]={0};
    // bool s=solveNQueen(mat,0,n);
    // if(!s)
    solve(0,n,ans);
        cout<<"Possible="<<ans;
    return 0;
}