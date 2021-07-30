#include<bits/stdc++.h>
using namespace std;
// void fun(int* h){
//     int k=h;
//     int g=&h;
//     cout<<k<<"\n"<<g<<"\n"<<h;
// }
int main(){
    int a=10;
    int* p=&a;
    int* q=p;
    cout<<p<<" "<<q;
}