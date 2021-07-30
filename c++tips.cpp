#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(i=0;i<n;i++)
template<typename... T>
void read(T&... args){
    ((cin>> args), ...);
}
template<typename... T>
void write(T&... args){
    ((cout<<args<<" "),...);
}
int main(){
    int x(100);
    deb(x);
    vector<int> arr(10,2);
    int i=0;
    fo(i,10)
        cout<<arr[i]<<" ";
    int a,y,z,zz;
    read(a,y,z,zz);
    write(a,y,z,zz);
    cout<< __gcd(8,16);
    return 0;
}