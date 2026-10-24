#include <bits/stdc++.h>
using namespace std;

// make node
struct Node{ //struct is lie class, but not everythign is public liek class-so we deifn teh public parts
    int data;
    Node* next;
    //constructor
    Node(int val){
        data=val;
        next= nullptr;
    }
};

/* Q.
1. traverse
2. make a manual ll- print head
3. insert at head, print head
4. insert at tail, print tail
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val){
        data=val;
        next= nullptr;
    } 
};

// 1. Traversal
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

// 2. Missing Function: Insert at Head
Node* insertAtHead(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head; // Point new node to the current head
    return newNode;       // Return the new node as the new head
}

// 3. Missing Function: Delete a Node
Node* deleteNode(Node* head, int key) {
    if (head == nullptr) return nullptr;
    
    // 1 If the node to delete is the head
    if (head->data == key) {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    
    // 2 Search for the node to delete
    Node* curr = head;
    while (curr->next != nullptr && curr->next->data != key) {
        curr = curr->next;
    }
    
    // 3 If found, bypass it and delete it
    if (curr->next != nullptr) {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
    return head;
}

int main() {
    // Creating a manual list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    printList(head); // Output: 10 -> 20 -> 30 -> NULL
    
    // Insert at head
    head = insertAtHead(head, 5);
    printList(head); // Output: 5 -> 10 -> 20 -> 30 -> NULL
    
    // Delete 20
    head = deleteNode(head, 20);
    printList(head); // Output: 5 -> 10 -> 30 -> NULL
    
    return 0;
}