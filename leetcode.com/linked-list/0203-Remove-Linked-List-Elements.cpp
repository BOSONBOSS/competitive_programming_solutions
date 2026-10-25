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

class Solution{
public:
/*1. Create a fake node called "dummy" with value 0.
2. Make the dummy point to the real head: dummy.next = head.
3. Start our current pointer at the dummy: curr = dummy.
4. WHILE curr.next is NOT NULL: 
    // (This means there is still a real node ahead of us to check)
    5. IF curr.next's value == target:
        // The node ahead is bad. Skip over it!
        curr.next = curr.next.next 
        // (Notice: we do NOT move curr forward here)
    6. ELSE:
        // The node ahead is safe. Step forward onto it.
        curr = curr.next
7. END WHILE
8. The real list starts at dummy.next. Return dummy.next.*/
    Node* removeElements(Node* head, int val){
        Node* dummy = new Node(-1);
        dummy->next=head;
        Node* curr=dummy; // *start* curr from dummy

        while(curr->next!=nullptr){
            if(curr->next->data==val){
                //value found ---> skip that node
                Node* temp = curr->next;       // Save it to free memory
                curr->next = curr->next->next; // Bypass the node
                delete temp;                   // Delete it from memory
            }
            else{
                //value not found---> move forward
                curr=curr->next;
            }
        }
        // The real head is whatever is after the dummy node
        Node* newHead = dummy->next;
        delete dummy; // clean up the dummy node
        return newHead;
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
    int n;cin>>n;
    if(n==0)return 0;
    


    return 0;
}