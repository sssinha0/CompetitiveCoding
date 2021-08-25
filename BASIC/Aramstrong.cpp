#include<bits/stdc++.h>
using namespace std;
// if the sqaure of the digit on the number of digit is called the armstrong number
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