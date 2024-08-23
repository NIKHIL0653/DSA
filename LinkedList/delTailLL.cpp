//delete tail of LL
#include <bits/stdc++.h>
using namespace std;

/*We stop just before the last element 
and make it point to NULL.

And if we have 1 element in LL we delete that.*/

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

Node* deleteTail (Node* head){
    //LL is empty || LL has only 1 element
    if (head == NULL || head -> next == NULL){
        return NULL;
    }

    /*We preserve the head and create a temperory pointer
    that will iterate over the LL, because in the end we 
    always return the head*/

    Node* temp = head;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
        //after this the temp will be at 2nd last element
    }
    // we will have to free the memory to delete the
    //last element
    free (temp->next);

    temp -> next = NULL;

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

    head = deleteTail(head);

    current = head;
    while(current != NULL){//Prints LL after deletion
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;

return 0;
}