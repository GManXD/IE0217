#include <iostream>
using namespace std;  // para poder usar el cout

// funcion display con 2 variables
void display(int var1, double var2) {
    cout << "Numero entero: " << var1;
    cout << " y numero double: " << var2 << endl;

}

// misma funcion pero con una variable double
void display(double var) {
    cout << "Numero double: " << var << endl;

}

// Misma funcion pero con una variable int
void display(int var) {
    cout << "Numero entero: " << var << endl;

}

int main() {
    int a = 5;
    double b = 5.5;
    // Se llama a la funcion que utiliza enteros
    display(a);
    // Se llama a la funcion que utiliza double
    display(b);
    // Se llama a la funcion que utiliza los dos tipos
    display(a,b);

    return 0;;
}