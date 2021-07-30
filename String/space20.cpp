#include<bits/stdc++.h>
using namespace std;

void space(){
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            count++;
        }
    }
    int x=s.size()+count*2;
    char arr[x];
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            arr[x-1]=s[i];
            x--;
        }else{
            arr[x-1]='0';
            x--;
            arr[x-1]='2';
            x--;
            arr[x-1]='%';
            x--;
        }
    }
    cout<<arr;
}
int main(){
    space();

    return 0;
}