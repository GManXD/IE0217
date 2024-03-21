#include <iostream>
using namespace std;

int main(){
    // Arreglo de 3 elementos
    float arr[3];

    // Declarar el puntero flotante 
    float *ptr;

    cout << "Displaying addres using arrays: " << endl;

    //Usar un loop para imprimir la direccion de todos los elementos del array
    for (int i = 0; i < 3; ++i){
        // Forma1 (usando el &)
        cout << "&arr[" << i << "] = " << &arr[i] << endl;

    }
    // El valor de ptr = arr es lo mismo que ptr = &arr[0]
    ptr = arr;

    cout << "\nDisplaying address using pointers: " << endl;

    //Usar un loop para imprimir las direcciones de todos los elementos del array
    // Utilizando la notacion de punteros
    for (int i = 0; i < 3; ++i){
        cout << "ptr + " << i << " = " << ptr + i << endl;

    }
    
    return 0;

}   