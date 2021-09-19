#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string brr[n];
	    unordered_map<int,int> mp;
	    for(int j=0;j<n;j++){
	        string x;
	        cin>>brr[j];
	        
	    }
	   for(int j=0;j<n;j++){
	        int dec =stoi(brr[j], nullptr, 2);
	        mp.insert({dec,1});
	    }
        int l=0;
	    for(int j=pow(2,n-1);j<pow(2,n);j++){
	        if(!mp.count(j)){
	            l=j;
	            break;
	        }
	    }
	    string binary = bitset<100>(l).to_string();
        string s="";
        int flag=0;
        for(int i=0;i<100;i++){
            if(binary[i]=='1'&&flag==0){
                flag=1;
            }
            if(flag==1){
                s+=binary[i];
            }
        }
	    cout<<s<<endl;
	}
	
	return 0;
}
