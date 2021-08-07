#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int slot=a/c;
	    int days=slot*(b%c);
	    //for last handle
	   if(a%c!=0){
	           int m=a%c;
	           //how much number range in last slot
	           if(0<b%c&&b%c<=m)
	            days+=b%c;
	            //all number belong to last lot
	           if(m<b%c)
	            days+=m;
	   }
	   days=days+b/c+1;
	   cout<<days<<endl;
	}
	   // int k=0;
	   // int l=b%c;
	   // for(int j=0;j<a;j++){
	   //        if(j%c<l){
	   //            k++;
	   //        }else if(j%c==l&&b>j){
	    
	   //             k++;
	   //        }
	   // }
	   // cout<<k+1<<endl;
// 2
// 4
// 9
// 8
// 5
// 10
// 8
// 9
	   // vector<pair<int,int>> arr;
	   // for(int j=0;j<a;j++){
	   //     arr.push_back({j%c,j});
	   // }
	   // sort(arr.begin(),arr.end());
	   // int k=0;
	   // for(auto x:arr){
	   //     k++;
	   //     if(x.second==b){
	   //         cout<<k<<endl;
	   //         break;
	   //     }
	   // }
	       
	return 0;
}
