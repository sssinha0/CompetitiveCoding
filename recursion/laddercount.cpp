#include<iostream>
using namespace std;
int ladder(int s){
    if(s<0){
        return 0;
    }
    if(s==0)
        return 1;
    return ladder(s-1)+ladder(s-2)+ladder(s-3);
}

int main(){
    cout<<"enter the size of ladder";
    int s;
    cin>> s;
    cout<<"No of the way"<<ladder(s);
    return 0;
}