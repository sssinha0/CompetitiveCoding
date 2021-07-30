#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


// The following program works only if your compiler is C99 compatible.

// n must be passed before the 2D array
void print(int m, int n, int arr[][n])
{
	int i, j;
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
		printf("%d ", arr[i][j]);
}

int main()
{
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int m = 3, n = 3;
	print(m, n, arr);
	return 0;
}

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