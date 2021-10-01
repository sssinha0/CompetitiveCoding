#include<bits/stdc++.h>
using namespace std;


// int main(){
// int n;
// cin>>n;
// vector<int> arr;
// for(int i=0;i<n;i++){
// 	int temp;
// 	cin>>temp;
// 	arr.push_back(temp);
// }
// bool k=true;
// while(k){
// 	int flag=0;
// 	for(int i=0;i<arr.size()-1;i++){
// 		if(arr[i+1]>arr[i]){
// 			arr.erase(arr.begin()+i+1);
// 			flag=1;
// 			break;
// 		}
// 	}
// 	if(flag==0)
// 	break;
// }

// for(int i=0;i<arr.size();i++){
// 	cout<<arr[i]<<" ";
// }
// return 0;
// }

int main(){
int n;
cin>>n;
int res=0;
while(n!=0){
	if(n%2==0){
		n=n/2;
	}else{
		n=n-1;	
	}
	res++;
	cout<<""<<res;
}
cout<<res;


}
// int main(){
// 	string s;
// 	cin>>s;
// 	int a,b;
// 	vector<int> arr;
// 	for(int i=0;i<s.size();i++){
// 		int k=(int)s[i];
// 		arr.push_back(k);

// 	}
// 	sort(arr.begin(),arr.end());
// 	cout<<arr[0]+arr[arr.size()-1];
// }
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	int arr[a];
// 	for(int i=0;i<a;i++)
// 		cin>>arr[i];
// 	for(int i=0;i<a;i++){
// 		if(b==arr[i]){
// 			cout<<i<<endl;
// 			break;
// 		}else{
// 			if(b<arr[i]){
// 				cout<<i<<endl;
// 				break;
// 			}
// 		}
// 	}
// }

// int main(){
// 	string s;
// 	getline(cin,s);
// 	int n;
// 	cin>>n;
// 	string temp = "";
// 	vector<string> v;
// 	for(int i=0;i<s.length();++i){
		
// 		if(s[i]==' '){
// 			v.push_back(temp);
// 			temp = "";
// 		}
// 		else{
// 			temp.push_back(s[i]);
// 		}
		
// 	}
// 	v.push_back(temp);
// 	vector<string> brr;
// 	unordered_map<string,int> mp;
// 	for(int i=0;i<v.size();i++){
// 		if(!mp.count(v[i])){
// 			mp.insert({v[i],1});
// 		}else{
// 			mp[v[i]]=mp[v[i]]+1;
// 		}
// 	}
// 	unordered_map<string,int>::iterator it;

// 	for(auto x:mp){
// 		if(x.second>=3){
// 			brr.push_back(x.first);
// 		}
// 	}
// 	sort(brr.begin(),brr.end());
// 	for(int i=0;i<brr.size();i++)
// 		cout<<brr[i]<<" ";

// }
// 	int n;
// 	cin>>n;
// 	vector<int> arr;
// 	while(n>=1){
// 		arr.push_back(n%10);
// 		n=n/10;
// 	}
	
// 	sort(arr.begin(),arr.end());
	
// 	int a=0,b=0;
// 	for(int i=0;i<arr.size();i++){
// 		a=a*10+arr[i];
// 		b=b*10+arr[arr.size()-i-1];
// 	}
// 	cout<<a+b;

// }
















// class Solution {
// 	public:
// 		int maximalNetworkRank(int n, vector<vector<int>>& roads) {
// 			bool arr[n][n];   //boolean adjacency matrix

// 			int cnt[n];          //array to store edge count

// 			for(int i=0;i<n;i++){                 //setting default values
// 				cnt[i]=0;
// 				for(int j=0;j<n;j++){
// 					arr[i][j]=false;
// 				}
// 			}


// 			for(auto c:roads){       //for each loop in roads vector
// 				cnt[c[0]]++;          //increasing edge count for vector elements
// 				cnt[c[1]]++;

// 				arr[c[0]][c[1]] = true;            //setting true value for adjacency matrix
// 				arr[c[1]][c[0]] = true;
// 			}

// 			int res =0;

// 			for(int i=0;i<n;i++){                    //looping through adjacency matrix
// 				for(int j=i+1;j<n;j++){            // j=i+1 bcz we dont want to check for same value (i ,i) 
// 					res = max(res,cnt[i]+cnt[j]-(arr[i][j]?1:0));   // if a road is common between 2 nodes subtract 1
// 				}
// 			}

// 			return res;             //please upvote if I helped
// 		}
// 	};


























// class woof{
// 	public:
// 	woof(){
// 		cout<<"woof";
// 	}
// };
// class foo{
// 	public:
// 	foo(){
// 		cout<<"foo";
// 	}
// };
// class bar:public foo{
// 	public:
// 	bar():Woof(new woof()){
// 		cout<<"bar";
// 	}
// 	woof *Woof;
// };
// int main(){
// int a=36;
// cout<<a//2;
// }













































                                     
















































































// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
//  int edgeCount[n];
//         return 0;
//         int m = starts.size();
//         int maxRank =INT_MIN;
//         for (int i = 0; i < m; i++) {
//             edgeCount[starts[i] - 1]++;
//             edgeCount[ends[i] - 1]++;
//         }
//         for (int i = 0; i < m; i++) {
//             int rank = edgeCount[starts[i] - 1] + edgeCount[ends[i] - 1] - 1;
//             if (rank > maxRank) {
//                 maxRank = rank;
//             }
//         }
//         return maxRank;


// class Container{
// 	public:
// 	~Container(){}
// 	// Container(const Container&){}
// };
// int* foo(){
// 	return new int[1000];
// }

// Container getContainer(){
// 	Container container=Container();
// 	return container;
// }


// int main(){

// 	string s;
// 	cin>>s;
// 	int n=s.size();
// 	int arr[26]={0};
// 	for(int i=0;i<n;i++){
// 		int l=(int)s[i]-97;
// 		arr[l]=arr[l]+1;
// 	}
// 	int flag=0;
// 	for(int i=0;i<26;i++){
// 		if(arr[i]%2!=0){
// 			flag=1;
// 			cout<<"Pairing is not possible"<<endl;
// 			break;
// 		}
// 	}
// 	if(flag==0){
// 		cout<<"Paring is possible"<<endl;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// int n;
// cin>>n;
// int arr[n]={0};
// for(int i=0;i<n;i++){
// cin>>arr[i];
// }
// int res=0;
// int count=0;
// int m=INT_MAX;
// int flag=0;
// for(int i=0;i<n;i++){
// if(arr[i]>=100){
// count++;
// flag=1;
// }else{
// flag=0;
// count=0;
// }
// if(res<count)
// 	res=count;
// if(m>arr[i]&&flag==1&&res<=count)
// m=arr[i];
// }
// cout<<m<<endl;
// return 0;
// }









// The following program works only if your compiler is C99 compatible.

// n must be passed before the 2D array
// void print(int m, int n, int arr[][n])
// {
// 	?
// 	for (j = 0; j < n; j++)
// 		// printf("%d ", arr[i][j]);
// }
// class p{
// 	p *next;
// 	int val;
// 	p(int val){
// 		this->val=val;
// 	}
// };
// int main()
// {
// 	// int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// 	// int m = 3, n = 3;
// 	// pri?nt(m, n, arr);
// 	int a=1;
// 	printf("%d", a+=(a+=3,5,a));
// 	return 0;
// }

// void fun(int n,int mat[][n]){
//     for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<mat[i][j]<<" ";
//             }
//     }
// }
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
// //     string ss="shashisaurabhsinha";
// //     int ll=ss.find("shk");
// //     cout<<ll;
// //     stringstream ss("23,4,56");
// // char ch;
// // int aa, bb, cc;
// // ss >> aa >> ch >> bb >> ch >> cc; 
// // cout<<aa<<bb<<cc;
// //     int a,b;
// //     cin>>a>>b;
// //     int arr[a][a]={0};
// //     for(int i=0;i<a;i++){
// //         int c;
// //         cin>>c;
// //         for(int j=0;j<c;j++){
// //             cin>>arr[i][j];
// //         }
// //     }
// //     for(int i=0;i<b;i++){
// //         int c,d;
// //         cin>>c>>d;
// //         cout<<arr[c][d]<<endl;
// //     } 
//     int n;
//     cin>>n;
//     int mat[n][n];
//     for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cin>>mat[i][j];
//             }
//     }
//     fun( n,mat);
//     return 0;
// }