#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *res=NULL;
        if(head==NULL||head->next==NULL)
            return head;
        while(head!=NULL){
            ListNode *temp=head;
            head=head->next;
            temp->next=NULL;
            if(res==NULL)
                res=temp;
            else{
                temp->next=res;
                res=temp;
            }
        }
        return res;
    }
};