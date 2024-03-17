#include <iostream>
using namespace std;  // para poder usar el cout

int main(int argc, char* argv[]){
    // Argc es el contador de argumentos
    cout << "argc: " << argc << endl;
    // ArgV[] es una lista de los valores de los argumentos
    cout << "argv: " << argv[0] << endl;

    if (argc > 1) {
        cout << "Los argumentos adicionales son: " << endl;
        for (int i = 1; i < argc; ++i) {
            // Imprimir el numero de argumento con su respectivo valor
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }
    return 0;
}