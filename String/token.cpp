#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
   string input;
   getline(cin,input);
   stringstream ss(input);
   string token;
   vector<string> tokens;
   while(getline(ss,token,' ')){
       tokens.push_back(token);
   }
   for(auto x:tokens){
       cout<<x<<"%20";
   }

   //using strtok();
   char i[1000];
   cin.getline(i,1000);
   char *t=strtok(i," ");
   while(t!=NULL){
       cout<<t<<endl;
       t=strtok(NULL," ");
   }
    return 0;
}