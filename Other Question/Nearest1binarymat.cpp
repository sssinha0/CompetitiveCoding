#include<bits/stdc++.h>
using namespace std;
 int m,n;
int calculatedist(int m,int n,int i,int j,int **mat){
    int min=INT_MAX;
    for(int k=j;k<n;k++){
        if(mat[i][k]==1)
            if(min>=(k-j)){
                min=(k-j);
            }
        if(min==0)
            return 0;
    }
    for(int k=j-1;k>=0;k--){
        if(mat[i][k]==1)
            if(min>=(j-k)){
                min=(j-k);
            }
        if(min==0)
            return 0;
    }
    for(int k=i;k<m;k++){
        if(mat[k][j]==1)
            if(min>=(k-i)){
                min=(k-i);
            }
        if(min==0)
            return 0;
    }
    for(int k=i-1;k>=0;k--){
        if(mat[k][j]==1)
            if(min>=(i-k)){
                min=(i-k);
            }
        if(min==0)
            return 0;
    }
    if(min>n)
        return -1;
    return min;
}
void findnearest(int m,int n,int **mat){

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=calculatedist(m,n,i,j,mat);
            arr[i][j]=k;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>m>>n;
    int** mat=new int*[m];
    for(int i=0;i<m;i++){
        mat[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                cin>>mat[i][j];
        }
    }
    findnearest(m,n,mat);
    return 0;
}