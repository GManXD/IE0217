#include <iostream>
using namespace std;

class ClassB;  // Declarar Clase ClassB

class ClassA{
    private:
        int numA;

        // Declarar clase Amiga:
        friend class ClassB;

    public:
        // Constructor de la clase inicializa numA = 12
        ClassA() : numA(12) {}
};

class ClassB{
    private:
        int numB;

    public:
        // Constructor de la clase inicializa numB = 1
        ClassB() : numB(1) {}

        // Metodo add() usa la variable privada de ClassA
        int add() {
            ClassA objectA;  // Declara objeto de la clase A
            // Utilizar la variable privada numA de ClassA
            return objectA.numA + numB;
        }

};


int main(){
    // Instanciar objeto
    ClassB objectB;

    cout << "Sum : " << objectB.add();

    return 0;
}