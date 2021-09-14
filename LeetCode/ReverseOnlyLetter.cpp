#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res="";
        for(int i=s.size()-1;i>=0;i--){
            int k=(int)s[i];
            if((k>=65&&k<=90)||(k>=97&&k<=122)){
                res+=s[i];
            }
        }
        string r="";
        int j=0;
        for(int i=0;i<s.size();i++){
            int k=(int)s[i];
            if((k>=65&&k<=90)||(k>=97&&k<=122)){
                r=r+res[j];
                j++;
             
            }else{
                  r=r+s[i];
            }
        }
        return r;
    }
};