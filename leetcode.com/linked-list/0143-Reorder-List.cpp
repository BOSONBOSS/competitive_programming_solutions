#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

class Solution {
public:
    void reorderList(Node* head) {
        if(head==nullptr|| head->next==nullptr||head->next->next==nullptr){
            return;
        }
        //1. slow-middle-move by 1 fast-end move by 2
        Node* slow= head;
        Node* fast= head;
        while(fast->next!=nullptr && fast->next->next!=nullptr ){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //2. reverse* secondHalf
        //start secondhalf from middle
        Node* secondHalf= slow->next;
        //break the end with nullptr
        slow->next=nullptr;
        //do reverse stuff
        Node* prev= nullptr;
        Node* curr= secondHalf;
        while(curr!=nullptr){
            //save next node
            Node* nextNode= curr->next;
            //reverse arrow
            curr->next=prev;
            //move prev and curr forward
            prev=curr;
            curr=nextNode;
        }
        //return prev (head of reversed)
        Node* reversedSecondHalf =prev;

        //3. merge
        Node* first = head;
        Node* second= reversedSecondHalf;
        while(second!=nullptr){
            // save nodes 
            Node* temp1= first->next;
            Node* temp2= second->next;
            // weave 
            first->next=second;
            second->next=temp1;
            //move forward
            first=temp1;
            second=temp2;
        }

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
    Node* tail= head;
    for(int i=1;i<n;i++){
        cin>>val;
        tail->next= new Node(val);
        tail=tail->next;
    }
    Solution obj;
    obj.reorderList(head); // Note: This function is VOID, it modifies the list in-place!
    printList(head);

    return 0;



}