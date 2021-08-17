#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Our function GCD="<<gcd(a,b)<<endl;
    cout<<"built fuction GCD="<<__gcd(a,b);
    return 0;
}