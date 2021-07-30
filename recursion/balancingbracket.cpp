#include<iostream>
#include<string>
using namespace std;

void balancebracket(string output,int n,int open,int close,int i){
    if(i==2*n){
        cout<<output<<endl;
        return;
    }
    if(open<n){
        balancebracket(output+'(',n,open+1,close,i+1);
    }
    if(close<open){
        balancebracket(output+')',n,open,close+1,i+1);
    }

}
int main(){
    string output;
    int a;
    cin>> a;
    balancebracket(output,a,0,0,0);
    return 0;
}