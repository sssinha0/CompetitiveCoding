#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26]={0};
        for(int i=0;i<text.size();i++){
            int k=(int)text[i]-97;
            arr[k]=arr[k]+1;
        }
        int a=arr[0];
        int b=arr[1];
        int c=arr[11];
        int d=arr[13];
        int e=arr[14];
        
        int res=0;
       while(a>=0&&b>=0&&c>=0&&d>=0&&e>=0){
          a--;
           b--;
           d--;
           c=c-2;
           e=e-2;
           if(a>=0&&b>=0&&c>=0&&d>=0&&e>=0)
               res++;
       } 
        return res;
    }
};