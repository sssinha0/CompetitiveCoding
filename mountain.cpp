#include<iostream>
#include<vector>
using namespace std;
int highest_mountain(vector<int> arr){
int result=0;
int a=arr.size()-1;
int i=1;

while(i<a){
    int count=1;
    if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
        int l=i;
        while(i>0&&arr[i]>arr[i-1]){
            count++;
            i--;
        }
        i=l;
        while(i<a&&arr[i]>arr[i+1]){
            count++;
            i++;
        }
if(result<count)
        result=count;
    }else
        i++;
    
}
return result;
}
int main(){
    vector<int> arr={5,6,1,2,3,4,5,4,3,2,0,1,2,3,2,4};
    cout<<highest_mountain(arr);
    return 0;
}