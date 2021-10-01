#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int fill(int grid[][4],int i,int j,int index,int n){
    int count=0;
        if(grid[i][j]==1){
            count++;
        grid[i][j]=index;
        if((j+1)<=n&&grid[i][j+1]==1)
        count+=fill(grid,i,j+1,index,n);
       if((j-1)>=0&&grid[i][j-1]==1)
        count+=fill(grid,i,j-1,index,n);
        if((i+1)<=n&&grid[i+1][j]==1)
        count+=fill(grid,i+1,j,index,n);
        if((i-1)>=0&&grid[i-1][j]==1)
        count+=fill(grid,i-1,j,index,n);
        }
        return count;
    
}
int makelarge(int grid[][4],int n){
    int result=0;
    for(int i=0;i<n;i++){
        int res=0;
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                set<int> st;
                if(i+1<=n&&grid[i+1][j]!=0)
                    st.insert(grid[i+1][j]);
                if(i-1>=0&&grid[i-1][j]!=0)
                    st.insert(grid[i-1][j]);
                if(j+1<=n&&grid[i][j+1]!=0)
                    st.insert(grid[i][j+1]);
                if(j-1>=0&&grid[i][j-1]!=0)
                    st.insert(grid[i][j-1]);
                if(st.size()>0){
                    for(int x:st){
                        auto it=mp.find(x);
                    res+=it->second;
                    }
                }
                res++;
                result=max(res,result);
                res=0;
            }
        }
        
        cout<<res<<" ";
        
    }
    return result;
}
int main(){
    int n=2;
    int grid[4][4]={
                    {0,1,0,1},
                    {1,1,0,1},
                    {0,1,0,0},
                    {0,0,1,1}};
        int index=2;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(grid[i][j]==1){
                    int k=fill(grid,i,j,index,4);
                    cout<<k<<" ";
                    mp.insert({index,k});
                    index++;
                }
            }
        }
        int res=makelarge(grid,4);

        cout<<res<<endl;
        map<int,int>::iterator gt=mp.begin();
        while(gt!=mp.end()){
            cout<<gt->first<<"="<<gt->second<<endl;
            gt++;
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}