// Implementaición de Stack en C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

// Crear el stack
struct stack{
    int items[MAX];
    int top;
};
// Definir tipo de dato "Struct stack"
typedef struct stack st;

void createEmptyStack(st *s){
    // Crea un stack vacio
    s->top = -1; 
}

int isfull(st *s) {
    // Verifica si el stack está lleno
    if (s->top == MAX -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(st *s){
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void push(st *s, int newItem){
    // Añadir elementos al stack
    if (isfull(s)){
        cout << "STACK FULL";
    }
    else{
        s->top++;
        s->items[s->top] = newItem;
    }
    size++;
}

void pop(st *s){
    // Imprime y elimina el ultimo elemento del stack
    if (isempty(s)){
        cout << "\nSTACK EMPTY \n";
    }
    else{
        cout << "Item popped = " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

void printStack(st *s){
    // Imprime los elemntos del stack
    printf("Stack: ");
    for (int i = 0 ; i < size; i++){
        cout << s->items[i] << " ";
    }
    cout << endl;
}

int main(){
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);

    free(s);
    return 0;
}