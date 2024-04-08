// Implementaición de la lista enlazada en C++

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Crear nodo
class Node{
    public:
        int value;  // Valor del elemento
        // Declarar Node puntero "next"
        Node* next;  // Contendrá la ubicación del siguiente elemento
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Asignar memoria
    one = new Node();
    two = new Node();
    three = new Node();

    // Asignar valores
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conectar los nodos
    one->next = two;
    two->next = three;
    three->next = NULL;  // Ya que es el ultimo, no apunta a nada

    // Imprimir los valores de la lista enlazada
    head = one;
    while(head != NULL){
        cout << head->value << endl;
        head = head->next;
    }
    // Liberar memoria
    delete head, one, two, three;
    return 0;
}