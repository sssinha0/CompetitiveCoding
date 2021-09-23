#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string breakPalindrome(string palindrome) {
        string res="";
        int n=palindrome.size();
        if(n==1)
            return res;
        else {
            int flag=0;
            if(n%2==0){
           for(int i=0;i<n;i++){
               if(palindrome[i]!='a'){
                   palindrome[i]='a';
                   break;
               }else{
                   flag++;
               }
           }
            if(flag==n){
                palindrome[n-1]='b';
            }
        
        }else{
           for(int i=0;i<n;i++){
               if(palindrome[i]!='a'&&i!=n/2){
                   palindrome[i]='a';
                  break;
               }else{
                   flag++;
               }
           }
            if(flag==n||flag==n-1){
                palindrome[n-1]='b';
            }
        }
        }
        return palindrome;
    }
};