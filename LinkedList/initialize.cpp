#include<bits/stdc++.h>
using namespace std;

class Node{
    public: // public krna important hai 
    //default me sb private rehta hai

    int data;
    Node* next;

    Node(int data){ // constructor
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){
    // Ek node banate hai ab
    Node* head = new Node(10);
    Node* second = new Node(20);
    cout << head -> data << endl;
    cout << second -> next << endl;

}