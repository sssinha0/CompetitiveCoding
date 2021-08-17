#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int l=arr[0];
    for(int i=1;i<n;i++){
        l=lcm(l,arr[i]);
    }
    cout<<"LCM of number="<<l;

    return 0;
}