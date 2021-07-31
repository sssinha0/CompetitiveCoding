// #include<bits/stdc++.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b)
	        if(b>c)
	            cout<<(a+b)<<endl;
	       else
	            cout<<(a+c)<<endl;
	   else if(c>a)
	            cout<<(b+c);
	       else
	            cout<<(b+a)<<endl;
	    
	}
	return 0;
}
// using namespace std;
// int m=2;
// int n=3;
// void fun2(int **mat){
//     for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<mat[i][j]<<" ";
//     }
// }
// void fun(int **mat){
//     fun2(mat);
// }
// int main(){
//    int** mat=new int*[m];
//    for(int i=0;i<m;i++)
//         mat[i]=new int[n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }
//     fun(mat);

//     return 0;
// }