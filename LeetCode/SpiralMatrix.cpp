#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int n=matrix[0].size();
     int l=0,c=0;
     int l1=r,c1=n;
    vector<int> arr;
    while(l<l1&&c<c1){
        for(int i=c;i<c1;i++){
            arr.push_back(matrix[l][i]);
        }
        l++;
        for(int i=l;i<l1;i++){
            arr.push_back(matrix[i][c1-1]);
        }
        c1--;
        for(int i=c1;i>c;i--){
            arr.push_back(matrix[l1-1][i-1]);
        }
        l1--;
        for(int i=l1;i>l;i--){
            arr.push_back(matrix[i-1][c]);
        }
        c++;
    }
      // if(n!=r)
      //     arr.pop_back();
    return arr;
    }
};