#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int res=0;
    
    for(int i=0;i<s.size();i++){
        int temp=0;
        int t=s[i]-48;
        int flag=0;
        if(t>=0&&t<=9){
            flag=1;
        int t1=0;
        if(s[i-1]=='-'&&i>=1){
            t1=1;
        }
        int temp=0;
        while(flag==1){
           temp=temp*10+t;
           i++;
            t=s[i]-48;
           if(t>=0&&t<=9){
               flag=1;
           }else{
               flag=0;
           }
        }
        if(t1==1){
            temp=-temp;
        }
        res=res+temp;
        }
        
    }
    cout<<res;

    return 0;
}