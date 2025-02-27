#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

void postOrder(Node* root) {
    if (root == nullptr) return;

    postOrder(root->left);      // Traverse left subtree
    postOrder(root->right);     // Traverse right subtree
    cout << root->data << " ";  // Visit root
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Post-Order Traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
