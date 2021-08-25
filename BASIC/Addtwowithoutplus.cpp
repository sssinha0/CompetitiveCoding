#include<bits/stdc++.h>
using namespace std;

int Add(int a,int b){
    if(b==0)
        return a;
    int c=a^b;
    int d=(a&b)<<1;
    return Add(c,d);
}
int main(){
    int a=Add(4,6);
    cout<<"Add two without plus="<<a;
    return 0;
}