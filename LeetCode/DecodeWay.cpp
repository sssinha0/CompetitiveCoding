
#include<bits/stdc++.h>
using namespace std;

fun(int input1,input2[],intput3){
    int b=1;
    int k=0;
    while(b==1){
        int s=0;
        for(int i=0;i<input1;i++){
            s=s+max((input2[i]-k),0);
        }
        if(s<=input3){
            b=0;
            break;
        }
        k++;
    }
    return k;
}



class Solution {
public:
    int numDecodings(string s) {
        if(s.size()==0||s[0]=='0')
                return 0;
       if(s.size()==1)
            return 1;
        int count1=1;
        int count2=1;
        for(int i=1;i<s.size();i++){
            int d=s[i]-'0';
            int dd=(s[i-1]-'0')*10+d;
            int count=0;
            if(d>0)
                count=count2;
            if(dd>=10&&dd<=26)
                    count+=count1;
            
            count1=count2;
            count2=count;
        }
        
        return count2;
    }
};