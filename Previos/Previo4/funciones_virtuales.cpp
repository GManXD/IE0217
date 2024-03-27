#include <iostream>
using namespace std;

class Base{
    public:
        // Funcion virtual
        virtual void print(){
            cout << "Base Function" << endl;

        }
};

class Derived : public Base{
    public:
        // Sobreesccritura de la funcion print()
        void print(){
            cout << "Derived Function" << endl;

        }
};


int main(){
    Derived derived1;  // Crear objeto derived1 clase Derived
    // Base puntero que apunta al objeto derived1
    Base* base1 = &derived1;
    // Llamar al metodo de la clase Derived
    base1->print();

    return 0;
}