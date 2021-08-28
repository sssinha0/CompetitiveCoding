#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        int j=0;
        int n=columnTitle.size();
        for(int i=n-1;i>=0;i--){
            res+=((int)columnTitle[i]-65+1)*pow(26,j);
            j++;
        }
        return res;
    }
};