#include <iostream>
using namespace std;

// Se utilizan los parametros por referencia (y sin usar punteros)
void swap(int &n1, int &n2){  //el & manda la variable por referencia
    // temp es variable temporal para hacer el swap
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}

int main(){

    //Inicializar variables
    int a = 1, b = 2;

    cout << "Befor swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Llamar la funcion para cambiar intercambiar los numeros
    swap(a,b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}