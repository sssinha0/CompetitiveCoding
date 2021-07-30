#include<bits/stdc++.h>
using namespace std;

//Turn off kth bit
void turnOff(){
cout<<"Enter the number and bit position"<<endl;
int a,b;
cin>>a>>b;
cout<<a<<" in binary"<<bitset<8>(a)<<endl;
 b=~(1<<(b-1));
 a=a&b;
cout<<"after off bit"<<a<<endl;
}

//Turn On kth bit
void turnOn(){
cout<<"Enter the number and bit position"<<endl;
int a,b;
cin>>a>>b;
cout<<a<<"in binary"<<bitset<8>(a)<<endl;
 b=(1<<(b-1));
 a=a|b;
cout<<"after ON bit"<<a<<endl;
}

//Check kth bit is set or Not
void Setkthbitornot(){
cout<<"Enter the number and bit position"<<endl;
int a,b;
cin>>a>>b;
cout<<a<<"in binary"<<bitset<8>(a)<<endl;
 b=(1<<(b-1));
 a=a&b;
if(a==0)
    cout<<"Not set"<<endl;
else
    cout<<"set bit"<<endl;
}

//Toggle kth bit 
void Toggle(){
cout<<"Enter the number and bit position"<<endl;
int a,b;
cin>>a>>b;
cout<<a<<"in binary"<<bitset<8>(a)<<endl;
 b=(1<<(b-1));
 a=a^b;
cout<<"after toggle bit"<<a<<endl;
}

int main(){
    turnOn();
    turnOff();
    Setkthbitornot();
    Toggle();

    return 0;
}