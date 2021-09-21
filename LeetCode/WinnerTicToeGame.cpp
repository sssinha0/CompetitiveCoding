#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int r=moves.size();
       char arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j]='#';
            }
        }
        for(int i=0;i<r;i++){
            if(i%2==0){
                arr[moves[i][0]][moves[i][1]]='X';
            }else{
               arr[moves[i][0]][moves[i][1]]='O';  
            }
        }
        
        int flag=0;
        string res="";
       if((arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')||(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')||(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')||(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')||(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')||(arr[2][0]=='X'&&arr[1][1]=='X'&&arr[0][2]=='X')||(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')||(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')){
           res="A";
           flag=1;
       }else if((arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')||(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')||(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O')||(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')||(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')||(arr[2][0]=='O'&&arr[1][1]=='O'&&arr[0][2]=='O')||(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')||(arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O')){
           res="B";
           flag=1;
       }
        if(flag==0){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(arr[i][j]=='#'){
                         res="Pending";
                        flag=2;
                        break;
                    }
                }
            }
            if(flag==0){
                res="Draw";
            }
        }
        return res;
    }
};