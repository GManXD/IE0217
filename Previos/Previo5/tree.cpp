#include <iostream>
using namespace std;

struct Node{
    int data; // Contiene el valor del elemento
    struct Node *left, *right;  // Node punteros
    Node(int data) {// Constructor
        this->data = data;
        left = right = NULL;
    }
};

void preorderTraversal(struct Node* node){
    // recorrido pre-orden
    if (node == NULL)
        return;
    
    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void postorderTraversal(struct Node* node){
    // recorrido post-orden
    if (node == NULL)
        return;
    
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";
}

void inorderTraversal(struct Node* node){
    // recorrido in-orden
    if (node == NULL)
        return;
        
    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);  
}   

int main(){
    // Nodo puntero a la raiz, se asigna memoria dinamica
    struct Node* root = new Node(1);
    // Asignar los nodos internos y hojas
    root->left = new Node(12);  
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    // Recorrido in-order
    cout << "Inorder traversal ";
    inorderTraversal(root);
    // Recorrido pre-order
    cout << "\nPreorder traversal ";
    preorderTraversal(root);
    // Recorrido post-order
    cout << "\nPostorder traversal ";
    postorderTraversal(root);
    // Liberar memoria
    delete root, root->left, root->right, root->left->right, root->left->left;
    return 0;
}