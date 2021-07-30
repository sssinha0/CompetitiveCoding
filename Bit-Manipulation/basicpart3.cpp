#include<bits/stdc++.h>
using namespace std;

//Unset the Rightmost set bit
void UnsetRightmost(){
cout<<"Enter the Number"<<endl;
int a;
cin>>a;
a=a&(a-1);
cout<<"Unset the rihgtmost set bit"<<a<<endl;
}

//check No is power of 2 or not
void checkPowerOftwo(){
cout<<"Enter the Number"<<endl;
int a;
cin>>a;
if(a&(a-1)){
    cout<<"Power of Two"<<endl;
}else
    cout<<"Not Power of Two"<<endl;
}

//find position of rihgtmost set bit
void rightmostsetbit(){
cout<<"Enter the Number"<<endl;
int a;
cin>>a;
int b=a&(a-1);
a=a^b;
cout<<"Unset the rihgtmost set bit position"<<a<<endl;
}

//Only set bit position
void OnlysetbitPos(){
cout<<"Enter the Number"<<endl;
int a;
cin>>a;
a=a&(a-1);
if(a!=0){
    cout<<"More than One bit"<<endl;
}else{
    cout<<"position is "<<log2(a)<<endl;
}
}

//bit parity
void bitparity(){
cout<<"Enter the Number"<<endl;
int a;
cin>>a;
bool parity=false;
while(a){
    if(a&(a-1)){
        parity=!parity;
    }
    a=a>>1;
}
if(!parity){
        cout<<"Odd parity"<<endl;
}else
    cout<<"Even parity"<<endl;
}
int main(){
    // rightmostsetbit();
    // bitparity();
    // UnsetRightmost();
    checkPowerOftwo();
    return 0;
}