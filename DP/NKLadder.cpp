#include<bits/stdc++.h>
using namespace std;

//topdown approach
int topdown(int *ladder,int k,int n){
    if(n==0||n==1){
            return 1;
    }
    if(ladder[n]!=0)
        return ladder[n];
    for(int i=0;i<min(n,k);i++){
        ladder[n]+=topdown(ladder,k,n-1-i);
    }
    return ladder[n];
}

//return sum of bottom up
int sum(int *ladder,int k,int i){
    int s=0;
    while(k>=0&&i>=0){
        s+=ladder[i];
        k--;
        i--;
    }
    return s;
}
//bottomup apporach
int bottomup(int n,int k){

    int ladder[n+1]={0};
    ladder[0]=1;
    ladder[1]=1;
    for(int i=2;i<=n;i++){
        ladder[i]=sum(ladder,k-1,i-1);
    }
    return ladder[n];
}

//store the addition of k like sliding windows
int sliding(int n,int k){
    int ladder[n+1]={0};
    ladder[0]=1;
    ladder[1]=1;
    int prev=2;
    for(int i=2;i<=n;i++){
        if(i<k){
            ladder[i]=sum(ladder,k-1,i-1);
            prev+=ladder[i];
        }else{
            ladder[i]=prev;
            prev=2*prev-ladder[i-k];
        }
        
    }
    return ladder[n];
    
}


int main(){
    int n,k;
    cout<<"enter the ";
    cin>>n>>k;
    int ladder[n+1]={0};
    cout<<"Top down="<<topdown(ladder,k,n)<<endl;
    cout<<"Bottom up="<<bottomup(n,k)<<endl;
    cout<<"Sliding window with bottom up="<<sliding(n,k)<<endl;
    return 0;
}