//starting node is called root of the tree
//nodes from the root/parent node is called children node
//node without children are called leaf nodes

//there are 5 types of BT
//1) Full BT: all nodes have 2 children
//2) Complete BT: all levels are completely filled except possibly the last level
//3) Perfect BT: all nodes are at the same level
//4) Balanced BT: max height can be log(N)
//5) Degenerate Tree: every node has single children

//representing BT in C++
struct Node{
    int data;
    Node* left;
    Node* right;
}

Node (int val){
    data = val;
    left = right = NULL;   
}

main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root -> left -> right = new Node(5);
}