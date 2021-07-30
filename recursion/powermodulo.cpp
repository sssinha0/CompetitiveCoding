#include<bits/stdc++.h>
using namespace std;
long long int helper(int a,int b){
    cout<<"a="<<a<<"b="<<b;
    if(b==0)
        return 1;
    return ((a%1000000007)*((helper(a,b-1))%1000000007))%1000000007;
}
long long int powerModulo(int a, int b){
    //Write your code here. Do not modify the function or parameters. Use helper functions if needed.
   long long int result=helper(a,b);
   return result;
}
   int main(){
       cout<<powerModulo(3,3);
       return 0;
   }