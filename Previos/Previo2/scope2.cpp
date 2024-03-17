// Programa2 donde se inicializa la funcion write_extern()
#include <iostream>
using namespace std;  // para poder usar el cout

extern int count;  // Se indica el extern

void write_extern(){
    cout << "El contador es " << count;
}