#include <iostream>
using namespace std;

// Se usa un define para MIPRIMERDEFINE
#define MIPRIMERDEFINE 995
enum seasons {  //Enumerador
    spring = 34,       // Posibles valores para el tipo seasons
    summer = 4,
    autum = 9,
    winter = 32
};

// Otro enumerador
enum enumsito{
    carro,
    casa,
    arbol,
    patio
};

int main() {
    seasons s;
    s = summer;  // Se asigna valor a la variable "s" tipo seasons
    cout << "Summer = " << s << endl;
    // del define:
    cout << "Define: " << MIPRIMERDEFINE << endl;
    // Se imprime el valor de arbol que se encuentra en enumsito
    cout << "arbol: " << arbol << endl;
    return 0;
}