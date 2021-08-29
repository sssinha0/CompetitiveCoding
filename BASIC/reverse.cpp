#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int res=0;
        long long int y=0;
        if(x<0){
            if(x==INT_MIN)
                    return 0;
            long long int z=-x;
            while(z>=1){
                res=res*10+z%10;
                z=z/10;
                y=res;
                 if(y*10>INT_MAX&&z>=1)
                        return 0;
              
            }
            if(res<=INT_MAX)
                res=-res;
        }else{  
            if(x>INT_MAX)
                    return 0;
            while(x>=1){
                res=res*10+x%10;
                x=x/10;
                y=res;
                cout<<y<<",";
                if(y*10>INT_MAX&&x>=1)
                    return 0;
            }
        }
        return res;
    }
};