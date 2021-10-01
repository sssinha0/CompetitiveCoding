// #include<bits/stdc++.h>
// using namespace std;

// int merger(vector<int> &arr,int i,int j){
// int mid=(i+j)/2;
// int s=i;
// int e=mid+1;
// int count=0;
// vector<int> temp;
// while(s<=mid&&e<=j){
//     if(arr[s]<arr[e]){
//            temp.push_back(arr[s]);
//            s++;
//     }else{
//             count+=(mid-s+1);
//             temp.push_back(arr[e]);
//             e++;
//     }
// }
// if(s<=mid){
//     temp.push_back(arr[s++]);
// }
// if(e<=j){
//     temp.push_back(arr[e++]);
// }
// for(int k=0;k<=(i+j);k++){
//     arr[k]=temp[k];
// }
// return count;
// }

// int inversion(vector<int> &arr,int i,int j){
//     if(i>=j)
//         return 0;
//     int mid=(i+j)/2;
//     int c1=inversion(arr,i,mid);
//     int c2=inversion(arr,mid+1,j);
//     int ci=merger(arr,i,j);
//     return c1+c2+ci;
// }
// int main(){
//     vector<int> arr={0,2,5,3,1};
//     cout<<"Inversion Count"<<inversion(arr,0,4);

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
 

// int xorOfArray(int arr[], int n)
// {
//     int res;
//     res=arr[0];
//     for(int i=1;i<n;i++){
//         if(i%5==1){
//             res=res^arr[i];
//         }else if(i%5==2){
//             res+=arr[i];
//         }else if(i%5==3){
//             res=res|arr[i];
//         }else if(i%5==4){
//             res=res^arr[i];
//         }
//     }
//     return res;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         // cout << xorOfArray(arr, n) << endl;
//         int res=xorOfArray(arr,n);
//         if(res%2==0)
//         cout<<"Even";
//         else
//         cout<<"Odd";
 
//     }
//     return 0;
// }
// C++ program to implement
// the above approach
 
// #include <bits/stdc++.h>
// using namespace std;
 

// map<int, int> mp;
 
// int N, P;
 
// bool helper(int mid)
// {
 
//     int cnt = 0;
//     for (auto i : mp) {
//         int temp = i.second;
 
//         while (temp >= mid) {
//             temp -= mid;
//             cnt++;
//         }
//     }
 

//     return cnt >= N;
// }
 
// int findMaximumDays(int arr[])
// {
 
    
//     for (int i = 0; i < P; i++) {
//         mp[arr[i]]++;
//     }

//     int start = 0, end = P, ans = 0;
//     while (start <= end) {
 
//         int mid = start
//                   + ((end - start) / 2);
 
      
//         if (mid != 0 and helper(mid)) {
 
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (mid == 0) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//     }
 
//     return ans;
// }
 
// // Driver code
// int main()
// {
 
//     cin>>N>>P;
//     int arr[P];
//    for(int i=0;i<P;i++){
//        cin>>arr[i];
//    }

//     cout << findMaximumDays(arr);
 
//     return 0;
// }


#include<stdio.h>
int main(){
    int t; //no of testcase
    for(int i=0;i<t;i++){
        int n,a,b;//sizeof stirng,inter distrt pass,inter state epass
        scanf("%d%d%d",&n,&a,&b);
        char arr[n];
        scanf("%s",arr);
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='0'){
                res+=a;
            }else{
                res+=b;
            }
        }
        printf("%d\n",res);
    }

    return 0;
}