#include <iostream>
using namespace std;  // para poder usar el cout

int suma(int, int); // Prototipo de funcion

int main() {
    int sum;
    // Se llama la funcion suma
    sum = suma(100, 78);  // Se le asigna el valor del return de suma()
    cout << "100 + 78 es : " << sum << endl;
    return 0;
}

// Definir funcion suma()
int suma(int a, int b) {
    return (a+b);  // Valor que devuelve la funcion suma
}