#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=n;
    int digit=0;
    while(n>=1){
        n=n/10;
        digit++;
    }
    int s=0;
    n=k;
    while(k>=1){
        int l=k%10;
        k=k/10;
        s=s+pow(l,digit);
    }
    if(n==s)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}