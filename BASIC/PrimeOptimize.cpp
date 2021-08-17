#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool arr[n+1]={false};
    for(int i=2;i*i<=n;i++){
        for(int j=2*i;j<=n;j+=i){
            arr[j]=true;
        }
    }
    for(int i=0;i<=n;i++){
        cout<<i<<" value= "<<arr[i]<<endl;
    }

    return 0;
}