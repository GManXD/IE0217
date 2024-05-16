#include <iostream>
#include "validador.hpp"
using namespace std;

int main(){
    ValidadorEmail validador;
    string opcion;
    while (true) {
        cout << "\nSeleccione su opcion" << endl;
        cout << "1. Ingresar correo electronico" << endl;
        cout << "2. Salir" << endl;
        cin >> opcion;
        // Casos del menu
        if (opcion == "1"){
            validador.solicitarCorreo();
            try{
                validador.validarCorreo(validador.correo);
                cout << "El correo es valido\n" << endl;

            } catch (const invalid_argument& e) {
                cout << "El correo no es valido\n" << endl;
                cout << "Error: " << e.what() << endl;
            }
        }
        else if (opcion == "2"){
            cout << "Saliendo del programa..." << endl;
            break;
        }
        else {
            cout << "Opcion no permitida.\n " << endl;
        }
    }
    return 0;
}