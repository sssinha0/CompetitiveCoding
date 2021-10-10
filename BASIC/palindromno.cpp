#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long y=0;
        int l=x;
        while(x>=1){
            int temp=x%10;
            if(y*10>INT_MAX){
                return false;
            }
                
            else
                y=y*10+temp;
            x=x/10;
        }
        if(l!=(int)y)
            return false;
        return true;
        
    }
};