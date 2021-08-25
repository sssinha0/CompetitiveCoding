#include<bits/stdc++.h>
using namespace std;

// find the multile of 5 and 7 between 1 to 40 


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int c1=c/a;
    int c2=c/b;
    int c3=c/(a*b);
    cout<<(c1+c2-c3);

    return 0;
}