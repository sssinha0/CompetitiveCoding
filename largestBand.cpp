#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int largestBand(vector<int> arr){
    int largest=1;
    unordered_set<int> s;
    for(int x:arr)
        s.insert(x);
    for(auto x:s){
        int parent=x-1;
        if(s.find(parent)==s.end()){
            int element=x+1;
            int c=1;
            while(s.find(element)!=s.end()){
                c++;
                element++;
            }
            if(largest<c)
                largest=c;
        }
    }
    return largest;
}

int main(){
    vector<int> arr={1,9,3,0,18,5,2,10,7,12,6};
    cout <<largestBand(arr);
    return 0;
}