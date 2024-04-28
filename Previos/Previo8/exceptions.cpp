#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try {
        // Excepción si el denominador es 0
        if (denominador == 0) {
            throw runtime_error("Error: el denominador no puede ser cero.");  // Lo manda al catch
        }

        // No se ejecuta si el denominador es 0
        resultado = numerador / denominador;
        cout << numerador << " / " << denominador << " = " << resultado << endl;
        
    }
    // Se ejecuta si hubo una excepcion
    catch (const exception& e) {
        // runtime_error
        cerr << e.what() << endl;
    }

    return 0;
}
