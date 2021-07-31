#include<bits/stdc++.h>
using namespace std;
int n;

int fibo(int* arr,int k){
if(k<=2)
    return 1;
if(arr[k]!=0)
    return arr[k];
else{
    arr[k]=fibo(arr,k-1)+fibo(arr,k-2);

}
return arr[k];
}

int main(){
    
    cout<<"Enter the no"<<endl;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++)
        arr[i]=0;
    cout<<"Fibo number of "<<n<<" ="<<fibo(arr,n);

   return 0; 
}