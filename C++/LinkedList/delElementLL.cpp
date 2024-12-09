#include <bits/stdc++.h>
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

Node* deleteEl(Node* head, int el){
    //if list is empty -> edge case
    if(head == NULL) return head;

    //if K is 1 -> edge case
    /*So to delete the head we move the head to next 
    and then delete the head*/
    if(head->data == el){
        Node* temp = head;
        head = head -> next;
        free (temp);
        return head;
    }

    //int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        //cnt++;
        if(temp->data == el){
            prev -> next = prev -> next -> next;
            free(temp);
            break;
        }
        prev = temp;
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

    head = deleteEl(head, 9);

    current = head;
    while(current != NULL){//Prints LL after deletion
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

return 0;
}