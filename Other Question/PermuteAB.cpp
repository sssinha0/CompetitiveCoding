#include<bits/stdc++.h>
using namespace std;
int helper(vector<vector<int>>& adj,int src,vector<int>& A,vector<int>& B)
{
    for(int i=0;i<adj[src].size();i++)
    {
        if(adj[src][i]!=-1)
        {
           if(B[src-1]==A[adj[src][i]-1])
           {
               int val=adj[src][i];
               swap(A[src-1],A[adj[src][i]-1]);
               adj[src][i]=-1;
               for(int j=0;j<adj[val].size();j++)
               {
                   if(adj[val][j]==src)
                   adj[val][j]=-1;
               }
               return(1);
           }
        }
    }
    return(0);
}
class Solution
{
    public:
    int solve(vector<int> &A, vector<int> &B, vector<vector<int> > &C) {
    vector<vector<int>> adj(A.size()+1,vector<int>(A.size()+1));
    for(int i=0;i<C.size();i++)
    {
        adj[C[i][0]].push_back(C[i][1]);
        adj[C[i][1]].push_back(C[i][0]);
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B[i])
        {
             if(helper(adj,i+1,A,B)==0)
             return(0);
        }
    }
    return(1);
}
};
int main(){
    Solution k;
     vector<int> A ={1, 3, 2, 4};
    vector<int> B={1, 4, 2, 3};
    vector<vector<int>> C={ 
        {2, 4}};
    cout<<k.solve(A,B,C);
    return 0;
}