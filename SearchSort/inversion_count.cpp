#include<bits/stdc++.h>
using namespace std;

int merger(vector<int> &arr,int i,int j){
int mid=(i+j)/2;
int s=i;
int e=mid+1;
int count=0;
vector<int> temp;
while(s<=mid&&e<=j){
    if(arr[s]<arr[e]){
           temp.push_back(arr[s]);
           s++;
    }else{
            count+=(mid-s+1);
            temp.push_back(arr[e]);
            e++;
    }
}
if(s<=mid){
    temp.push_back(arr[s++]);
}
if(e<=j){
    temp.push_back(arr[e++]);
}
for(int k=0;k<=(i+j);k++){
    arr[k]=temp[k];
}
return count;
}

int inversion(vector<int> &arr,int i,int j){
    if(i>=j)
        return 0;
    int mid=(i+j)/2;
    int c1=inversion(arr,i,mid);
    int c2=inversion(arr,mid+1,j);
    int ci=merger(arr,i,j);
    return c1+c2+ci;
}
int main(){
    vector<int> arr={0,2,5,3,1};
    cout<<"Inversion Count"<<inversion(arr,0,4);

    return 0;
}