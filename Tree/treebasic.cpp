#include<bits/stdc++.h>
using namespace std;

typedef struct treenode{
    int val;
    struct treenode *left;
    struct treenode *right;
    treenode(int val){
        this->val=val;
        left=right=NULL;
    }
}node;
int heighttree(node *root);
void preorder(node *root){
    if(root==NULL)
        return;
    cout<<root->val<<"->";
    preorder(root->left);
    preorder(root->right);
}
void preorderiterative(node *root){
    stack<node*> st;
    st.push(root);
    cout<<"\nIterative Preorder of tree =";
    while(!st.empty()){
        node *temp=st.top();
        st.pop();
        if(temp->right!=NULL){
            st.push(temp->right);
        }
        if(temp->left!=NULL){
            st.push(temp->left);
        }
        cout<<temp->val<<"->";
    }
}
void postorder(node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<"->";
} 
void postorderiterative(node *root){
    stack<node*> st1;
    stack<node*> st2;
    st1.push(root);
    if(root==NULL)
        return;
    while(!st1.empty()){
        node *temp=st1.top();
        st2.push(temp);
        st1.pop();
        if(temp->left!=NULL)
            st1.push(temp->left);
        if(temp->right!=NULL){
            st1.push(temp->right);
        }
    }
    cout<<"\nPostorder Iterative =";
    while (!st2.empty()){
        cout<<st2.top()->val<<"->";
        st2.pop();
    }
}
void inorder(node *root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->val<<"->";
    inorder(root->right);
}
void inorderiterative(node *root){
    stack<node*> st;
    while(true){
        if(root!=NULL){
            st.push(root);
            root=root->left;
        }else{
            if(st.size()==0)
                break;
            root=st.top();
            st.pop();
            cout<<root->val<<"->";
            
            root=root->right;
        }
    }
}
void levelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int l=q.size();
        for(int i=0;i<l;i++){
        node *temp=q.front();
        cout<<temp->val<<"->";
            q.pop();
             if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        }
        cout<<endl;
       
    }
}
void prepostinorder(node *root){
    stack<pair<node*,int>> st;
    if(root==NULL)
        return;
    st.push({root,1});
    vector<int> pre,post,in;
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
                st.push({it.first->right,1});
        }else{
            post.push_back(it.first->val);
        }
    }
    cout<<"preorder=";
    for(int i=0;i<pre.size();i++)
        cout<<pre[i]<<" ";
    cout<<"inorder=";
    for(int i=0;i<in.size();i++)
        cout<<in[i]<<" ";
    cout<<"postorder=";
    for(int i=0;i<post.size();i++)
        cout<<post[i]<<" ";

}

bool balancedcheck(node *root){
    if(root==NULL)
        return true;
    int lh=heighttree(root->left);
    
    int rh=heighttree(root->right);
    if(abs(lh-rh)>1){
        return false;
    }
    bool lch =balancedcheck(root->left);
    bool rch =balancedcheck(root->right);
    if(!lch||!rch)
        return false;
    return true;
}

// bool balancecheck(node *root){

// }
int maxi=0;
void diameter(node *root){
    if(root==NULL)
        return;
    int lh=heighttree(root->left);
    int rh=heighttree(root->right);
    maxi=max(maxi,lh+rh);
    diameter(root->left);
    diameter(root->right);
    
}
int heighttree(node *root){
    if(root==NULL)
        return 0;
    int leftheight=heighttree(root->left);
    int rightheight=heighttree(root->right);
    return (1+max(leftheight,rightheight));
}
int sumofNode(node *root){
    int leftsum,rightsum;
    if(root==NULL)
        return 0;
    else{
         leftsum=sumofNode(root->left);
         rightsum=sumofNode(root->right);
    }
    
    return root->val+leftsum+rightsum;
}
int treemax(node *root){
    int l,r;
    if(root==NULL){
        return 0;
    }else{
        l=treemax(root->left);
        r=treemax(root->right);

    }
    return max(root->val,max(l,r));
}
bool isexits(node *root,int val){
    bool l=false,r=false;
    if(root==NULL)
        return false;
    else{
        l=isexits(root->left,val);
        r=isexits(root->right,val);
    }
    return root->val==val||l||r;
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
    preorder(root);
    cout<<"\n Height of tree="<<heighttree(root);
    cout<<"\n Sum of node value ="<<sumofNode(root);
    cout<<"\n Maximum value of node ="<<treemax(root);
    cout<<"\n is exists="<<isexits(root,80);
    cout<<"\n is exists="<<isexits(root,5);
    preorderiterative(root);
    cout<<"\nPost Order traversal=";
    postorder(root);
    postorderiterative(root);
    cout<<"\nInorder Traversal=";
    inorder(root);
    cout<<"\nInorder Traversal Iterative=";
    inorderiterative(root);
    cout<<"\n Level order traversal=";
    levelordertraversal(root);
    prepostinorder(root);
    cout<<"\nCheck Tree is balanced or not="<<balancedcheck(root);
    diameter(root);
    cout<<"Diameter of tree="<<maxi;
    return 0;
}