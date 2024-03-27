#include <iostream>
using namespace std;

class ClassB;  // Declarar Clase ClassB

class ClassA{
    public:
        // Constructor de la clase inicializa numA = 12
        ClassA() : numA(12) {}
    private:
        int numA;
        // Declarar funcion Amiga:
        friend int add(ClassA, ClassB);
};

class ClassB{
    public:
        // Constructor de la clase inicializa numB = 1
        ClassB() : numB(1) {}
    
    private:
        int numB;
        // Declarar funcion amiga
        friend int add(ClassA, ClassB);

};

// Nota: la funcion amiga se define en ambas clases para poder usar ambas variables priv

int add(ClassA objectA, ClassB objectB){
    // Returna la suma de las variables privadas de ambos objetos
    return (objectA.numA + objectB.numB);
}

int main(){
    // Instanciar objetos
    ClassA objectA;
    ClassB objectB;

    cout << "Sum : " << add(objectA, objectB);

    return 0;
}