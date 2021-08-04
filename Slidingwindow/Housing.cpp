#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr={1,3,2,1,4,1,3,2,1,1,2};
    int target=8;
    int curr=0;
    int i=0,j=0;
    while(j<arr.size()){
        if(curr<target){
            curr+=arr[j];
            j++;
        }else if(curr>target&&i<j){
            curr=curr-arr[i];
            i++;
        }else if(target==curr){
            cout<<"i="<<i<<"j="<<j-1;
            curr=curr-arr[i];
            i++;
        }
    }
    return 0;
}