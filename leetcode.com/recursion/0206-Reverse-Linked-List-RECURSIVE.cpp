#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*.  ITERATIVE APPROACH
    ListNode* reverseList(ListNode* head){
        //prev, curr, nextNode
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            //1. save nextnode
            ListNode* nextNode=curr->next;
            //2. reverse arrow
            curr->next=prev;
            //3. prev forward to curr
            prev=curr;
            //4. curr forward to next node
            curr=nextNode;
        }
        return prev;
        // At the end, 'prev' points to the new head of the reversed list
        //prev correctly returns teh head of teh *REVERSED* list
    }*/

    //.   RECURSIVE APPROACH
    ListNode* reverseList(ListNode* head) {
        //BASE CASE
        if(head==nullptr || head->next == nullptr) return head;
        //rec funx
        ListNode* new_head= reverseList(head->next);
        
        head->next->next=head;
        head->next=nullptr;
        return new_head;
    }
};