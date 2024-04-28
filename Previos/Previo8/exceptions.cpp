#include <iostream>

using namespace std;

int main() {
    double numerador, denominador, division;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try {
        // Excepción si el denominador es 0
        if (denominador == 0) {
        throw 0;  // Lo manda al cath
        }

        // No se ejecuta si el denominador es 0
        division = numerador / denominador;
        cout << numerador << " / " << denominador << " = " << division << endl;
        
    }
    // Se ejecuta si hubo una excepcion
    catch (int num_exception) {
        cout << "Error: No se puede dividir por " << num_exception << endl;
    }

    return 0;
}
