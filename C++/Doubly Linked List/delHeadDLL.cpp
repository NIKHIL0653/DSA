#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;

    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* arr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head -> next == NULL) return NULL;

    Node* prev = head;
    head = head -> next; // we move the head ptr to next node

    head -> back = NULL;  // in DLL head's back points to NULL 
    prev -> next = NULL;    
    // by setting prev's next = NULL we separated the earlier head from the DLL 

    delete prev;    // we delete the segregated node from the memory itself
    return head;    // and return the new head
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = arr2DLL(arr);

    head = deleteHead(head);
    print(head);

    return 0;
}

