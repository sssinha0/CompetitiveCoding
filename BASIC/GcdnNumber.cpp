#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=arr[0];
    int k=arr[0];
    for(int i=1;i<n;i++){
        g=gcd(g,arr[i]);
        k=__gcd(k,arr[i]);
    }
    cout<<"GCD of n number="<<g<<endl;
    cout<<"GCD of the n number="<<k;
    return 0;
}