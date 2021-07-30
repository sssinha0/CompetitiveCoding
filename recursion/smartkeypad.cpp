#include<iostream>
#include<cstring>
using namespace std;
string keypad[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };
void samrtkeypad(string input,string output,int i=0){
    if(input[i]=='\0'){
        cout<<output<<endl;
        return;
    }
    int current_element=input[i]-'0';
    if(current_element==0||current_element==1){
        samrtkeypad(input,output,i+1);
    }
    for(int k=0;k<keypad[current_element].size();k++){
            samrtkeypad(input,output+keypad[current_element][k],i+1);
    }
    return;
}
int main(){
    string input;
    string output;
    cin>> input;
    samrtkeypad(input,output,0);
    return 0;
}