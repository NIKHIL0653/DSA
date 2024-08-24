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

Node* insertK (Node* head, int el,int K){
    /*if K=3 then 2nd element shoudl point to new node and
    new node to 4th node if LL has 4 nodes and K=5 
    we can add after 4 and make new node poin to NULL
    
    But keep in  kind that K cannot exceed 5*/

    if(head == NULL){
        if(K == 1) return new Node(el);
        else return head;
    }
    if(K == 1){
        Node* temp = new Node(el, head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;

    while(temp != NULL){
        cnt++;
        if(cnt == K-1){
            Node* x = new Node(el);
            x -> next = temp -> next;
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
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

    head = insertK(head, 8, 2);

    current = head;
    while(current != NULL){//Prints LL after deletion
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

return 0;
}