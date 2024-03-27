#include <iostream>
using namespace std;

class Animal{
    // Clase Base para la herencia
    public:
        void info() {cout << "I am an animal. "<< endl;}

};

class Dog : public Animal {// Hereda de la clase Animal
    public:
        void bark(){cout << "I am a Dog. Woof woof." << endl;}
};

class Cat : public Animal {  // Tambien hereda de la clase Animal
    public:
        void meow() {cout << "I am a Cat. Meow." << endl;}
};

int main(){
    // Crear objeto de la clase Dog
    Dog dog1;
    cout << "Dog Class: " << endl;
    dog1.info();  // Metodo de la clase Animal
    dog1.bark(); // Metodo de la clase Dog

    // Crear objeto de la clase Cat
    Cat cat1;
    cout << "\nCat class: " << endl;
    cat1.info(); // Metodo de la clase Animal
    cat1.meow(); // Metodo de la clase Cat

    return 0;
}