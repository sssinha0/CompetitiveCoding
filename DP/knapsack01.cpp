#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> profit={60,100,120};
    vector<int> weight={10,20,30};
    int mxw=50;
    int n=3;
    int dp[n+1][mxw+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=mxw;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(j>=weight[i-1]){
                dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i-1][mxw-weight[i-1]]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=mxw;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][mxw];

    return 0;
}