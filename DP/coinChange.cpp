#include<bits/stdc++.h>
using namespace std;

//Top Down approach coin Change problem
int minnoofCoinsTop(vector<int> coins,int n){
    
}

//Bottom UP approach coin chnage problem
int minnoofcoins(vector<int> coins,int n){
    vector<int> dp(n+1,0);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
        for(int x : coins){
            if(i-x>=0&&dp[i-x]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-x]+1);
            }
        }
    }
    return dp[n]==INT_MAX? -1:dp[n];
}
int main(){
    vector<int> coins={1,5,7,10};
    int n=16;
    cout<<"Minimum number of coins required="<<minnoofcoins(coins,n);
    return 0;
}