#include <iostream>
using namespace std;

int main(){

    // Declarar un puntero entero
    int *pointInt;
    // Declarar un puntero float
    float *pointFloat;

    // Asignar memoria dinamica
    pointInt = new int;
    pointFloat = new float;

    // Asignar un un valor al espacio de memoria
    *pointInt = 45;
    *pointFloat = 45.45f;
    // Imprimir valores
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // Liberar memoria
    delete pointInt;
    delete pointFloat;

    return 0;
}