#include<bits/stdc++.h>
using namespace std;

void binarysearch(vector<int> &arr,int key,int i,int j){
    int mid=(i+j)/2;
    if(i>=j){
        cout<<"not found";
        return;
    }
    if(arr[mid]==key){
        cout<<"found at pos="<<mid-1;
    }
    if(arr[mid]<key){
        binarysearch(arr,key,mid,j);
    }else{
        binarysearch(arr,key,i,mid-1);
    }
}
int main(){

    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    binarysearch(arr,5,0,10);
    
    return 0;
}