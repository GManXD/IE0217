#include <iostream>
#include "persona.hpp"

using namespace std;

int main(){
    // Se crea el objeto p de la clase Persona
    // Se le pasa el nombre y la edad
    Persona p("Juan", 25); 

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;
    // Se cambia la edad con el metodo setEdad()
    p.setEdad(26);

    cout << "Nueva edad: " << p.getEdad() << endl;

    return 0;
}