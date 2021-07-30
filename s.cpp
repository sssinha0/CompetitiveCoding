#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> arr={1,2,3,4,5};
    vector<int> arr(10,0);
    arr.pop_back();
    arr.push_back(16);
    for(int i=0;i<arr.size();i++){
        cout <<arr[i] <<endl;
    }
    vector<vector<int>> a={{1,2,3,4},{2,3,4,5},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<a.size();i++){
        for(int x : a[i]){
            cout <<x<<",";
        }
        cout <<endl;
    }
}
