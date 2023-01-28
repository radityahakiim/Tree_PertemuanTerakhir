#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

// Helper untuk Membuat node Baru
Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Fungsi untuk membuat urutan preorder
void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Fungsi untuk membuat urutan inorder
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

// Fungsi untuk membuat urutan postorder
void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Membuat binary tree
    Node* root = newNode(21);
    root->left = newNode(13);
    root->right = newNode(36);
    root->left->left = newNode(8);
    root->left->right = newNode(15);
    root->right->left = newNode(26);
    root->right->right = newNode(17);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(11);
    root->left->right->left = newNode(18);
    root->right->right->left = newNode(4);

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
