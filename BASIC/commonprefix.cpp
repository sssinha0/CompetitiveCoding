#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size()<=1||strs[0].size()==0)
            return strs[0];
    else{
        vector<char> temp(strs[0].begin(),strs[0].end());
        for(int i=1;i<strs.size();i++){
            int k=0;
            if(strs[i].size()==0||temp.size()==0){
                return "";
            }else{
                while(k<strs[i].size()&&k<temp.size()){
                    if(temp[k]==strs[i][k]){
                        k++;
                    }else
                        break;
                }
                int l=temp.size();
                while(k<l){
                    temp.pop_back();
                    k++;
                }
            }
        }
         string t(temp.begin(),temp.end());
         res=t;
    }
    
    return res;
    }
};