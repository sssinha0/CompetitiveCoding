#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
node *t=NULL;
int k=0;
void addNode(node *head,int n){
    node* temp=new node(n);
    if(head==NULL){
        head=temp;
        if(k==0){
            cout<<"sha";
        t=head;
        k=1;
        }
    }else{
        if(head->val>n){
            if(head->left!=NULL)
                addNode(head->left,n);
            else{
                head->left=temp;
            }
        }else if(head->right!=NULL)  
            addNode(head->right,n);
            else
                head->right=temp;
    }

}
void printbst(node* head){
    if(head==NULL)
        return;
    cout<<head->val;
    printbst(head->left);
    printbst(head->right);
    
}

int main(){
    bool a=true;
    node *head=NULL;
    t=head;
    while(a){
        cout<<"enter no/-1 to break";
        int n;
        cin>>n;
        if(n==0)
            break;
       addNode(head,n);
    }
    if(t==NULL)
        cout<<"null";
    printbst(t);
    return 0;
}