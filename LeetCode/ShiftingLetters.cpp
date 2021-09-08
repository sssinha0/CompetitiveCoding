#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        int arr[n];
        arr[n-1]=shifts[n-1];
        for(int i=1;i<n;i++){
            if(arr[n-i]>26)
                arr[n-i]=arr[n-i]%26;
            arr[n-1-i]=arr[n-i]+shifts[n-1-i];
        }
        // for(int i=0;i<n;i++)
        //     cout<<arr[i]<<",arr[i]%26="<<arr[i]%26<<","<<endl;
        for(int i=0;i<n;i++){
            int l=arr[i]%26;
            int temp=(int)s[i]-97;
            if((temp+l)>=26){
                temp=temp+l-26;
            }else{
                temp=temp+l;
            }
            s[i]=(char)(97+temp);
        }
        return s;
    }
};