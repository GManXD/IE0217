#include <iostream>
int main(){
    // Declarar un puntero
    int* pointVar;
    // Asignar espacio de memoria dinamica
    pointVar = new int;
    // Asignar valor a la variable
    *pointVar = 45;

    std::cout << pointVar;

    // Liberar espacio de memoria
    delete pointVar;

    return 0;
}

