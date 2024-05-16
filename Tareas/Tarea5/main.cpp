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
            // Verificar que el correo contiene '@'
            if (correo.find('@') == string::npos) {
                throw invalid_argument("El correo electronico debe contener '@'");
            }

            string const emailRegex = "^[a-zA-Z0-9][a-zA-Z0-9-_]{1,14}(?:\\.[a-zA-Z0-9-_]+)*@(?:[a-zA-Z](?:[a-zA-Z]{1,28}[a-zA-Z])?\\.)+[a-zA-Z](?:[a-zA-Z]*[a-zA-Z])?$";
            return std::regex_match(correo, regex(emailRegex));
        }

};

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