#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr,int S){
    vector<int> result;
    unordered_set<int> s;
    for(int i=0;i<arr.size();i++){
        int x=S-arr[i];
        if(s.find(x)!=s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
    return {};
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    auto g=pairsum(arr,1);
    if(g.size()==0)
        cout<<"this is not found in the list"<<endl;
    else{
        cout<<g[0]<<" "<<g[1];
    }

}