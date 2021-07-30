#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int trappedwater(vector<int> heights){
    int result=0;
    int s=heights.size();
    if(s<=2)
        return 0;
    vector<int> h1(s,0),h2(s,0);
    h1[0]=heights[0];
    h2[s-1]=heights[s-1];
    for(int i=1;i<s;i++){
      h1[i]=max(h1[i-1],heights[i]);
      h2[s-i-1]=max(h2[s-i],heights[s-i-1]);
    }
    for(int i=0;i<s;i++){
        result+=min(h1[i],h2[i])-heights[i];
    }
    return result;
}
int main(){
    vector<int> water={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedwater(water);
    return 0;
}