#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node *left;
    struct node *right;
    node(int data){
        val=data;
        left=right=NULL;
    }
}node;
void verticalorder(node *root){
    map<int,map<int,multiset<int>>> mp; 
    queue<pair<node*,pair<int,int>>> q;
    if(root==NULL)
        return;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        node *t=it.first;
        int x=it.second.first;
        int y=it.second.second;
        mp[x][y].insert({t->val});
        if(t->left!=NULL){
            q.push({t->left,{x-1,y+1}});
        }
        if(t->right!=NULL){
            q.push({t->right,{x+1,y+1}});
        }
    }
    for(auto p:mp){
        for(auto q:p.second){
            multiset <int, int > :: iterator itr;
            for(itr=q.second.begin();itr!=q.second.end();++itr){
                cout<<*itr<<" ";
            }
            
        }
        cout<<endl;
    }
}
int main(){
    node *root=new node(10);
    node *t1=new node(20);
    node *t2=new node(30);
    node *t3=new node(40);
    node *t5=new node(50);
    node *t6=new node(60);
    node *t7=new node(70);
    node *t8=new node(80);
    node *t4=new node(90);
    root->left=t1;
    root->right=t2;
    t1->left=t3;
    t1->right=t4;
    t2->left=t5;
    t2->right=t6;
    t4->right=t7;
    t6->left=t8;
    verticalorder(root);
    return 0;
}