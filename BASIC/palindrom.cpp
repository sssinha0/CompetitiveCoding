#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s;
    int l=s.size();
    int flag=0;
    if(l==0||l==1){
        cout<<"Palindrom hai "<<endl;
    }else{
        if(l%2==0){
            int j=l-1;
            l=l/2;
            int i=0;
            string res="";
            while(i<l&&j>=l){
                if(s[i++]!=s[j--]){
                    flag=1;
                    cout<<"Not Palindrom "<<endl;
                    break;
            }
            }
        }else{
            int k=l-1;
            l=l/2;
            for(int i=0;i<l;i++){
                if(s[i]!=s[k-i]){
                    flag=1;
                    cout<<"Not Palindrom"<<endl;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<"palindrom hai "<<endl;
    }
}