#include <iostream>
using namespace std;

class Animal{
    public:  // Se puede acceder desde cualquier lugar
        void setdEdad(int age){
            // Coloca la edad
            edad = age;
        }
        int getEdad(){
            // Retorna la edad
            return edad;
        }
    
    protected:  // Solo pueden acceder las clases derivadas
        string nombre;
    
    private:  // Solo se puede acceder desde la misma clase
        int edad;
};


class Perro: public Animal {  // Clase hija
    public:
        void setNombre(string n){
            // Coloca el nombre
            nombre = n;
        }

        string getNombre(){
            // Retorna el nombre
            return nombre;
        }
};

int main(){
    Perro miPerro; // objeto miPerro de la clase Perro
    miPerro.setNombre("Toby");  // Metodo publico de la clase Perro
    miPerro.setdEdad(3);        // Metodo publico de la clase Animal

    // getNombre() es un metodo publico de la clase Perro
    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    // getEdad() es un metodo publico de la clase Animal
    cout << "y tiene " << miPerro.getEdad() << " anios." << endl;

    return 0;
}