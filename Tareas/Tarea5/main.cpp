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
            string const nombreRegex = "(^(?!.*[-._]{2})[a-zA-Z0-9._-]{1,15}(?![\\w.-]*[-._]{2})[a-zA-Z0-9])";
            string const dominioRegex = "((?!.*\\.\\.)[a-zA-Z]{1,30}(?:\\.[a-zA-Z]{1,30})*)";
            string const extensionRegex = "([a-zA-Z]{2,6}(?:\\.[a-zA-Z]{2,6})*)";
            string const emailRegex = "^[a-zA-Z0-9][a-zA-Z0-9-_]{1,14}(?:\\.[a-zA-Z0-9-_]+)*@(?:[a-zA-Z](?:[a-zA-Z]{1,28}[a-zA-Z])?\\.)+[a-zA-Z](?:[a-zA-Z]*[a-zA-Z])?$";
            std::regex regex(emailRegex);
            return std::regex_match(correo, regex);
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
            break;
        }
        else {
            cout << "Opcion no permitida. " << endl;
        }
    }
    return 0;
}