#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int arr[26]={0};
        int n=releaseTimes.size();
        int l=(int)keysPressed[0]-97;
        arr[l]=releaseTimes[0];
       
        for(int i=1;i<n;i++){
            l=(int)keysPressed[i]-97;
            if(releaseTimes[i]-releaseTimes[i-1]>arr[l])
                arr[l]=releaseTimes[i]-releaseTimes[i-1];
        }
        int m=0;
        char res='a';
        for(int i=0;i<26;i++){
            if(arr[i]>=m){
                m=arr[i];
                res=char(97+i);
            }
        }
        return res;
    }
};