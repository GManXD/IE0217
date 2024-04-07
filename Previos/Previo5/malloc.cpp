#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    // Asignar memoria con malloc y convertirlo en un entero puntero
    int* ptr = (int*)malloc(sizeof(int));

    // Asignar valor a la memoria asignada
    *ptr = 5;
    // Imprimir valor
    cout << *ptr;

    return 0;
}