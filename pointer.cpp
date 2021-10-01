#include<bits/stdc++.h>
using namespace std;
void fun(int *p){

}
int main(){
    int a=10;
    int *b;
    cout<<b<<endl;
    b=&a;
    cout<<b<<endl;
    int *c{nullptr};
    cout<<c<<endl;
    c=&a;
    cout<<c<<endl;
    *c=20;
    int d=80;
    c=&d;
    cout<<c<<" "<<a<<endl;
    int *e{nullptr};
    cout<<e<<" ";

    return 0;
}