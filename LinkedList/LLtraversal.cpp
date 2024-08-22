#include<bits/stdc++.h>
using namespace std;

//pehle Node define karo

class Node{
    public:
    int data; // ye LL ke elements hai
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1; // yha hum Node bana rhae hai
        //aage ye constructor ko bass call kr dene se 
        //nodes apne aap ban jayenge
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }// idhar hum LL ka 1st node bana rahe hai 
    // isliye next ko null point karva diye hai
};

// Traversal and printing
int main(){
    vector<int> arr = {2,4,5,6,7};
    Node* head = new Node(arr[0]);
    Node* current = head;

    //ab array ko traverse karenge normal loop se
    //and har element ko node me insert krenge simultaeously

    for(int i = 1;i<arr.size();i++){ // note that i = 1 beacuse head is
    //already created and has a value "arr[0] = 2"
        Node* newNode = new Node(arr[i]); //
        current -> next = newNode;
        current = newNode;
    }
    // ab LL print krenge
    current = head;
    while(current != nullptr){
        cout << current -> data << " ";
        current = current -> next;
}
cout << endl;

return 0;
}