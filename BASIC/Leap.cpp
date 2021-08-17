#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400){
                cout<<"Leap year"<<endl;
            }else{
                cout<<"NOt Leap year"<<endl;
            }
        }else{
            cout<<"Leap Year"<<endl;
        }
    }else{
        cout<<"NOT Leap year"<<endl;
    }

    return 0;
}