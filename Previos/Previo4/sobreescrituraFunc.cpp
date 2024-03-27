#include <iostream>
using namespace std;

class Base{
    public: 
        void print(){   // Metodo print de la clase Base
            cout << "Base Function" << endl;
        }
};

class Derived : public Base{  // Herencia de la clase Base
    public:
        void print(){  // Metodo print de la clase Derived
            cout << "Derived Function" << endl;
        }
};

int main(){
    Derived derived1, derived2;
    // Se usa el metodo print() de la clase Derived
    derived1.print();  

    // Forma de utilizar el metodo print() de la clase Base
    derived2.Base::print();

    return 0;
}