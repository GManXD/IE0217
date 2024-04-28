// Ejemplo de una mala practica:  sin manejo de excepciones
#include <iostream>

using namespace std;

int main() {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    // Se ejecuta sin manejo de excepciones
    resultado = numerador / denominador;
    cout << numerador << " / " << denominador << " = " << resultado << endl;

    return 0;
}
