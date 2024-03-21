#include <iostream>
using namespace std;

// definiendo BOOK_ID_MAX
#define BOOK_ID_MAX 10

//enumerando
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX,
} casas_t;  // casas_t es el tipo para el enum

int main(){

    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}