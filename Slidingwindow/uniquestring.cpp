#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="abcadeba";
    int i=0,j=0;
    int res=0;
    int count=0;
    unordered_map<char,int> mp;
    while(j<s.size()){
        if(mp.find(s[j])==mp.end()){
            count++;
            mp.insert([i],j);
        }else{
            
        }
        if(count>res){
            res=count;
            
        }
        
    }
    return 0;
}