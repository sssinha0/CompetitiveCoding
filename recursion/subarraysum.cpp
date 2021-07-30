#include<iostream>
#include<vector>
using namespace std;

int subarray(vector<int> arr,int i,int n,int X){
    if(i==n){
        if(X==0){
            return 1;
        }
        return 0;
    }
    int inc=subarray(arr,i+1,n,X-arr[i]);
    int exc=subarray(arr,i+1,n,X);
    return inc+exc;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int X=10;
    cout<<"subarray Sum is "<<subarray(arr,0,5,X);
    return 0;
}