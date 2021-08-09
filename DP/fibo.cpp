#include<bits/stdc++.h>
using namespace std;

int fibtopdown(int n,int *dp){
    if(n==0||n==1)
        return 1;
    if(dp[n]!=0)
        return dp[n];
    return dp[n]=fibtopdown(n-1,dp)+fibtopdown(n-2,dp);
}
int fibobottom(int n){
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    int dp[n+1]={0};
    cout<<"Top down="<<fibtopdown(n,dp)<<endl;
    cout<<"bottom UP="<<fibobottom(n)<<endl;

    return 0;
    
}