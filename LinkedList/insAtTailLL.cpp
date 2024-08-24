#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1; // we write this to avoid writing nullptr every time
        next = nullptr;
    }
};

Node* insertTail (Node* head, int el){
    /*the idea is to take a temp pointer and move it
    to the last node and make sure that temp's next is
    pointing to NULL and not temp -> NULL*/

    if(head == NULL) return new Node(el);
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;

    Node* newNode = new Node(el);
    temp -> next = newNode;
    return head;
}

int main(){
    vector<int> arr = {3,5,7,9,1};
    Node* head = new Node(arr[0]);
    Node* current = head;

    for(int i =1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        current->next = newNode; 
        current = newNode;
    }
    current = head;
    while(current != NULL){ // prints LL
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

    head = insertTail(head, 8);

    current = head;
    while(current != NULL){//Prints LL after deletion
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

return 0;
}