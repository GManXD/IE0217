#include <iostream>
using namespace std;

// Se utilizan los parametros por referencia (usando punteros)
void swap(int* n1, int* n2){
    // temp es variable temporal para hacer el swap
    int temp;
    temp = *n1;  // El * me dice el contenido del puntero
    *n1 = *n2;
    *n2 = temp;

}

int main(){

    //Inicializar variables
    int a = 1, b = 2;

    cout << "Befor swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Llamar la funcion para cambiar intercambiar los numeros
    swap(&a,&b);  // Se envia el tipo entero puntero (con &)

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}