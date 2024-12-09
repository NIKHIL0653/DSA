//DFS
//Level Order Traversal (BFS)

// 1) Inorder Traversal (Left + Root + Right)
// 2) Pre-order Traversal (Root + Left + Right)
// 3) Post-order Traversal (Left + Right + Root)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void preorder(Node* root, vector<int> &arr){
    // If the current node is NULL
    // (base case for recursion), return
    if(root == nullptr){
        return;
    }
    // Push the current node's value into the vector
    arr.push_back(root->data);
    // Recursively traverse the left subtree
    preorder(root->left, arr);
    // Recursively traverse the right subtree
    preorder(root->right, arr);
}

// Function to initiate preorder traversal and return the resulting vector
vector<int> preOrder(Node* root){
    // Create an empty vector to store preorder traversal values
    vector<int> arr;
    // Call the preorder traversal function
    preorder(root, arr);
    // Return the resulting vector containing preorder traversal values
    return arr;
}

// Main function
int main()
{
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Getting preorder traversal
    vector<int> result = preOrder(root);

    // Displaying the preorder traversal result
    cout << "Preorder Traversal: ";
    // Output each value in the preorder traversal result
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}









