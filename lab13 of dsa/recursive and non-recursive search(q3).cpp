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

// Insert a node into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) return new Node(value);
    
    if (value < root->data) 
        root->left = insert(root->left, value);
    else 
        root->right = insert(root->right, value);
    
    return root;
}

// Non-Recursive Search in BST
bool searchNonRecursive(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key) return true;
        root = (key < root->data) ? root->left : root->right;
    }
    return false;
}

// Recursive Search in BST
bool searchRecursive(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;
    
    return (key < root->data) ? searchRecursive(root->left, key) : searchRecursive(root->right, key);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    cout << "Non-Recursive Search: " << (searchNonRecursive(root, key) ? "Found" : "Not Found") << endl;
    cout << "Recursive Search: " << (searchRecursive(root, key) ? "Found" : "Not Found") << endl;

    return 0;
}
