#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        string smallest=s;
        for(int i=0;i<n;i++){
            smallest=min(smallest,s.substr(i)+s.substr(0,i));
            
        }
        if(k>1){
            sort(s.begin(),s.end());
             return s;
        }
       return smallest;
    }
};