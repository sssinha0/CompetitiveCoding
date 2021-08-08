#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    vector<int> a;
    while(i<=mid&&j<=e){
        if(arr[i]>arr[j])
            a.push_back(arr[j++]);
        else
            a.push_back(arr[i++]);
    }
    while(i<=mid){
        a.push_back(arr[i++]);
    }
    while(j<=e)
        a.push_back(arr[j++]);
    i=0;
    for(int x=s;x<=e;x++)
        arr[x]=a[i++];

}

void mergesort(vector<int> &arr,int s,int e){
    if(s>=e)
        return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    vector<int> arr={3,2,1,5,7,4,8};
    mergesort(arr,0,6);
    for(int x:arr)
        cout<<x<<" ";

    return 0;
}