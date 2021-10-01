#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="parteekbhaiya";
    int i=0,j=0;
    int res=0;
    int count=0;
    unordered_map<char,int> mp;
    while(j<s.size()){
        if(!mp.count(s[j])){
            count++;
            mp.insert({s[j],j});
        }else{
            cout<<count<<" ";
            if(count>res)
                res=count;
            count=count-mp[s[j]];
            mp.clear();
        }
    j++; 
    }
    cout<<res;
    return 0;
}