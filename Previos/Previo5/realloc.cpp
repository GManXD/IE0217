#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Declarar 2 punteros
    float *ptr, *new_ptr;
    // Asignar memoria con malloc y lo castea a float*
    ptr = (float*) malloc(5 * sizeof(float));
    if (ptr = NULL){    // Caso Null
        cout << "Memory allocation Failed" ;
        exit(1);  // Salida con 1
    }

    // Inicializar bloques de memoria
    for (int i = 0; i < 5; i++){
        ptr[i] = i*1.5;  // Asignando valores

    }
    // Re-asignar memoria con realloc y lo castea a float*
    new_ptr = (float*) realloc(ptr, 10*sizeof(float));
    if (new_ptr = NULL){    // Caso Null
        cout << "Memory Re-allocation Failed" ;
        exit(1);  // Salida con 1
    }

    // Inicializar los bloques de memoria re asignados
    for (int i = 0; i < 10; i++){
        new_ptr[i] = i*2.5;  // Asignando valores

    }

    cout << "Printing Values " << endl;

    for (int i = 0; i < 5; i++){
        cout << new_ptr[i] << endl;
    }

    // Liberar memoria
    free(new_ptr);

    return 0;
}