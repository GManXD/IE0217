#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // declarar entero puntero
    int *ptr;
    // Asignar memoria con calloc (5 elementos de tamaño de un entero) y volviendolo entero puntero
    ptr = (int*)calloc(5, sizeof(int));
    if (!ptr){  // En el caso de NULL
        cout << "Memory Allocation Failed";
        exit(1);    // Salir con valor de 1
    }
    cout << "Initializing values.. " << endl
         << endl;
    for (int i = 0; i < 5; i++){
        ptr[i] = i*2 +1;    // Asignar valores

    }
    cout << "Initialized values" << endl;
    for (int i = 0; i < 5; i++){ 
        // ptr[i] y *(ptr+i) se pueden usar igual
        cout << *(ptr+i) << endl; // Imprimir valores
    }
    // Liberar memoria
    free(ptr);
    return 0;
}