#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int a=big.find(small);
    if(a!=-1){
    result.push_back(a);
    while(a!=-1){
        a=big.find(small,a+1);
        if(a!=-1){
            result.push_back(a);
        }else
            break;
    }
    }else{
        result.push_back(a);
    }
    return result;
}
int main(){

    vector<int> result=stringSearch("I liked the movie, acting movie in movie was great!","movie");
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
