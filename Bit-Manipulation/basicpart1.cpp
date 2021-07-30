#include<bits/stdc++.h>
using namespace std;
//Check Even or Odd
void EvenOrOdd(){
    cout<<"Enter the no";
    int a;
    cin>>a;
    if(a&1){
        cout<<"odd Number";
    }else   
        cout<<"Even Number";
}
//Check the Sign of two number;
void checkSign(){
    cout<<"Enter two number"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<a<<"bit is"<<bitset<32>(a)<<endl;
    cout<<b<<"bit is"<<bitset<32>(b)<<endl;
    bool isOpposite=((a^b)<0);
    if(isOpposite)
        cout<<a<<" and "<<b <<" is Opposite Sign"<<endl;
    else    
        cout<<a<<" and"<<b<<" Same Sign"<<endl;
    return;
}
//Add One two the number
void AddOne(){
cout<<"enter the nuber"<<endl;
int a;
cin>>a;
cout<<a<<" +1="<<-~a<<endl;
return;
}

//Swap without use of third variable
void swap(){
cout<<"Enter two number"<<endl;
int a,b;
cin>>a>>b;
cout<<"a="<<a<<"b="<<b<<endl;
if(a!=b){
    a=a^b;
    b=a^b;
    a=a^b;
}
cout<<"Swap a="<<a<<"b="<<b<<endl;
}
int main(){
    EvenOrOdd();
    checkSign();
    AddOne();
    swap();
    return 0;
}