#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> arr;
    vector<int> k;
    void fun(TreeNode* root,int count,int targetSum){
        if(root==NULL){
            return;
        }
        k.push_back(root->val);
        count+=root->val;
        if(count==targetSum&&root->left==NULL&&root->right==NULL){
            arr.push_back(k);
            fun(root->left,count,targetSum);
        }else{
        fun(root->left,count,targetSum);
        fun(root->right,count,targetSum);
        }
        k.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root!=NULL){
                fun(root,0,targetSum);
        }
    return arr;
    }
};