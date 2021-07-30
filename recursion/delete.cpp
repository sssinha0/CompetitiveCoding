#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partitionDisjoint(vector<int>& arr) {
        int j=arr.size()-1;
       int left=arr[0];
        int result=0;
       for(int i=1;i<j;i++){
           if(arr[i]<left){
               result=i;
           }
       }
      
        return result+1;
    }
};
int main(){
    Solution k;
    vector<int> arr={5,0,3,8,6,7,4,6};
    cout<<k.partitionDisjoint(arr);
    return 0;
}