#include <iostream>
#include <regex>
using namespace std;

class ValidadorEmail {
    public:
        string correo;

        void solicitarCorreo(){
            cout << "Ingrese su correo electronico: " << endl;
            cin >> this->correo;
        }
        
        bool validarCorreo(const string& correo){
            // Codigo para validar
        }

};

int main(){
    ValidadorEmail validador;
    string opcion;
    while (true) {
        cout << "Seleccione su opcion" << endl;
        cout << "1. Ingresar correo electronico" << endl;
        cout << "2. Salir" << endl;
        cin >> opcion;
        // Casos del menu
        if (opcion == "1"){
            validador.solicitarCorreo();
            if (validador.validarCorreo(validador.correo)){
                cout << "El correo es valido" << endl;
            }
            else{
                cout << "El correo no es valido" << endl;
            }
        }
        else if (opcion == "2"){
            cout << "Saliendo del programa..." << endl;
        }
        else {
            cout << "Opcion no permitida. " << endl;
        }
    }
    return 0;
}