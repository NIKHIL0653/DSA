#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *arr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *prev = head;
    head = head->next; // we move the head ptr to next node

    head->back = NULL; // in DLL head's back points to NULL
    prev->next = NULL;
    // by setting prev's next = NULL we separated the earlier head from the DLL

    delete prev; // we delete the segregated node from the memory itself
    return head; // and return the new head
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next; // we move the tail ptr to next node till we reach the end of DLL
    }

    Node *newTail = tail->back; // we take a new ptr and set it to tail -> back (i.e node before the original tail)
    newTail->next = nullptr;    // in DLL tail's back points to prev and next to NULL
    tail->back = nullptr;       // we segregate the tail to be deleted from the DLL bye setting back to NULL

    delete tail; // we delete the segregated node from the memory itself
    return head; // and return the new head
}

Node *deleteK(Node *head, int k)
{
    // since the node can be in the middle of the DLL we have to find out
    // the nodes before and after the node to be deleted since after deletion we also need to connect them

    if (head == NULL)
    {
        return NULL;
    }
    int cnt = 0;
    Node *kNode = head;
    while (kNode != NULL)
    {
        cnt++;
        if (cnt == k) break;
        kNode = kNode->next;
    }
    Node *prev = kNode->back;
    Node *front = kNode->next;

    // edge cases
    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arr2DLL(arr);
    head = deleteK(head, 1);
    head = deleteTail(head);
    print(head);

    return 0;
}