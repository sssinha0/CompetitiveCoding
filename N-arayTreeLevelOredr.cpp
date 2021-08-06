/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> arr;
    vector<vector<int>> levelOrder(Node* root) {
        if(root!=NULL){
        queue<Node*> q;
        q.push(root);
        vector<int> k;
        k.push_back(root->val);
        arr.push_back(k);
        k.clear();
        int ct=0;
        int ct2=0;
        while(!q.empty()){
            auto x=q.front();
            for(auto y:x->children){
                q.push(y);
                k.push_back(y->val);
                ct2++;
            }
            if(ct==0){
                 arr.push_back(k);
                k.clear();
                ct=ct2;
                ct2=0;
                }
            ct--;
            q.pop();
        }
        arr.pop_back();
        }
        return arr;
    }
};