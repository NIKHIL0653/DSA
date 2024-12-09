// isme node pe data hota hai
// aur saath me ek address hota hai jo doosre node
// ke taraf point karega

// ek function bna lo jo nodes insert karega

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertionatHead(Node *&head, int d)
{
    // isme insert krne ke liye pehle pta hona chahiye ki head kaha hai
    // isliye head pass kiya hai as a reference
    // as a reference isliye kyuki hume doosra LL nhi bnana but usi existing
    // LL me insert krna hai

    // 1. Naya node bana lenge fir usme data daal denge
    Node *newNode = new Node(d);
    // 2. Fir Naye node ko previous node jo head tha uspe point karwa denge
    newNode->next = head;
    // 3. Last me bs head pointer ko new node pe point karwa denge.
    head = newNode;
}

// Insertion at end
void InsertionatEnd(Node *&head, int d)
{
    // 1. Naya node bana lenge fir usme data daal denge
    Node *newNode = new Node(d);
    // 2. Agar LL khali hai to head bhi new node hi hoga
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // 3. Agar LL me kuch data hai to hume last node ko find k
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // 4. Last node ko find karke hum uspe new node ko point karege
        temp->next = newNode;
    }
}
// Insertion at specific position
