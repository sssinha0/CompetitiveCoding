#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=1;
        int n=s.size();
        st.push(s[0]);
        while(i<n){
            if(s[i]==']'){
                if(!st.empty())
                if(st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }else
                    return false;
            }else if(s[i]=='}'){
                if(!st.empty())
                if(st.top()=='{'){
                    st.pop();
                }else{
                    return false;
                }else
                    return false;
            }else if(s[i]==')'){
                if(!st.empty())
                if(st.top()=='('){
                    st.pop();
                }else{
                   return false;
                }else
                    return false;
                
            }else{
                st.push(s[i]);
            }
            i++;
        }
        return st.empty();
    }
};