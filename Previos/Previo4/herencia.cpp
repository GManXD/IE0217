#include <iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            // Imprime que puede comer
            cout << "I can eat" << endl;
        }

        void sleep(){
            // Imprime que puede dormir
            cout << "I can sleeep" << endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            // Imprime que puede ladrar
            cout << "I can bark! Woof woof!!" << endl;

        }
};

int main(){
    Dog dog1;  // Crear objeto dog1 clase Dog

    // Llamar los metodos de la clase animal
    dog1.eat();
    dog1.sleep();

    // Llamar el metodo de la clase perro
    dog1.bark();

    return 0;
}