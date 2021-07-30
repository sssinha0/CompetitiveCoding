#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> triplete(vector<int> arr,int targetSum){
     int n=arr.size();
      sort(arr.begin(),arr.end());
    vector<vector<int>> result;
   
   
    for(int i=0;i<n-3;i++){
            int j=i+1;
            int k=n-1;
            while(k>j){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==targetSum){
                    result.push_back({arr[i],arr[j],arr[k]});
                }
                if(sum>targetSum){
                    k--;
                }else   
                    j++;
            }
    }
    return result;
}
int main(){
    vector<int> arr={1,2,3,4,5,7,8,9,15};
    int targetSum=18;
    auto s=triplete(arr,targetSum);
    if(s.size()==0)
        cout <<"Not found any triplete";
    else
    for(int i=0;i<s.size();i++){
            cout <<s[i][0]<<","<<s[i][1]<<","<<s[i][2]<<endl;
    }
    return 0;
}