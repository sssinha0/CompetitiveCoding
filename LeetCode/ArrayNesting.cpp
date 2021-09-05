#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        for(int i=0;i<n;i++)
                arr[i]=0;
        int res=0;
        for(int i=0;i<n;i++){
            int m=0;
            if(arr[i]==0){
                int j=i;
                while(arr[j]==0){
                    arr[j]=1;
                    m++;
                    j=nums[j];
                }
            }
            if(m>res)
                res=m;
        }
        return res;
    }
};