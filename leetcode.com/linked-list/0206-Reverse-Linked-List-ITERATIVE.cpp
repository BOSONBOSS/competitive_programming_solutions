#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    //constructor
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Solution{
public:
    Node* reverseList(Node* head){
        //prev, curr, nextNode
        Node* prev=nullptr;
        Node* curr=head;
        while(curr!=nullptr){
            //1. save nextnode
            Node* nextNode=curr->next;
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
    }
};
void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";

        temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main(){
    int n; cin>>n;
    if(n==0) return 0;

    int val; cin>> val;
    Node* head= new Node(val);
    Node* tail=head;
    for(int i=1;i<n;i++){
        cin>>val;
        tail->next= new Node(val);

        tail=tail->next;
    }
    Solution obj;
    Node* newHead= obj.reverseList(head);
    printList(newHead);
    return 0;

}