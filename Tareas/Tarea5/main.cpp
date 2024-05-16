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
            // Verificar que el correo contiene un '@'
            if (correo.find('@') == string::npos) {
                throw invalid_argument("El correo electronico debe contener '@'");
            }

            // Regular expresion
            string const emailRegex = "^[a-zA-Z0-9][a-zA-Z0-9-_]{1,14}(?:\\.[a-zA-Z0-9-_]+)*@(?:[a-zA-Z](?:[a-zA-Z]{1,28}[a-zA-Z])?\\.)+[a-zA-Z](?:[a-zA-Z]*[a-zA-Z])?$";
            std::regex patronRegex(emailRegex);

            // Validar el correo electrónico
            // Verificar si el nombre no cumple con las reglas
            if (correo.find('@') > 15 || correo.find('@') == 0) {
                throw invalid_argument("El nombre de usuario debe tener entre 1 y 15 caracteres. ");
            }
            // Verificar si el dominio no cumple con las reglas
            size_t posArroba = correo.find('@');
            string dominio = correo.substr(posArroba + 1);
            if (dominio.length() > 30) {
                throw invalid_argument("El dominio debe tener entre 1 y 30 caracteres. ");
            }


            // Verificar si la extensión no cumple con las reglas
            size_t posUltimoPunto = dominio.find_last_of('.');
            string extension = dominio.substr(posUltimoPunto + 1);
            if (extension.length() < 2 || extension.length() > 6 ) {   // Caso que no respete la longitud
                throw invalid_argument("La extension debe tener entre 2 y 6 letras.");
            }
            if (!regex_match(extension, regex("^[a-zA-Z]+$"))){  // Caso de que tenga caracteres especiales o numerps
                throw invalid_argument("La extension no puede contener numeros ni caracteres especiales.");
            }

            if (correo.find("..") != string::npos || correo.find("--") != string::npos || correo.find("__") != string::npos){
                throw invalid_argument("No puede contener dos caracteres especiales consecutivos. ");
            }

            return regex_match(correo, patronRegex);  // Si todo salió bien
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