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
    int getDecimalValue(Node* head){
        int result=0;
        Node* temp=head;
        while(temp!=nullptr){
            result=result*2+temp->data;

            temp=temp->next;
        }
        return result;
    }
};

int main(){// 1H-2T-3L-4C method for input for Linked List
    //0 read number of nodes
    int n;
    cin>>n;
    if(n==0)return 0;

    //0.5-start
    int val;
    cin>>val;
    //1Head
    Node* head=new Node(val);
    //2Tail
    Node* tail= head;
    //3Loop(for teh rest of n-1 remaining elements)
    for(int i=1;i<n;i++){
        cin>>val;
        tail->next=new Node(val);

        tail=tail->next;
    }
    //4call
    Solution obj;
    cout<<obj.getDecimalValue(head)<<endl;


    return 0;
}