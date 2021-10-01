#include<bits/stdc++.h>
#include<set>
using namespace std;
set<vector<int>> ans;
void sub(vector<int> &arr,int i,vector<int> &temp){
if(i==arr.size()){
    ans.insert(temp);
}
sub(arr,i+1,temp);
temp.push_back(arr[i]);
sub(arr,i+1,temp);
}
void printvector(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ;";
    }
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> temp;
    sub(arr,0,temp);
    
    for(auto itr=ans.begin();itr!=ans.end();itr++){
        printvector(*itr);
    }
    return 0;
}