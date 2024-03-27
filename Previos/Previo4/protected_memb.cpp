#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
        // Solo puede ser accedida desde la misma clase
        string color;
    
    protected:
        // Solo puede ser accedida desde la misma clase o derivada
        string type;
    
    public:
        // Puede ser accedida en cualquier lugar
        void run() {cout << "I can run -- Base" << endl;}
        void eat() {cout << "I can eat!" << endl;}
        void sleep() {cout << "I can sleep!" << endl;}
        // Se usa la variable privada color
        void setColor(string clr) { color = clr;}
        string getColor() {return color;}

};

class Dog : public Animal {  // Hereda de la clase Animal
    public:
        // Sobreescritura de la funcion run()
        void run() {cout << "I can run -- Derived" << endl;}
        // type puede ser accedida pues es protegida
        void setType(string tp) { type = tp;{}}
        void displayInfo(string c){
            // Se debe pasar c (color) por parametro debido a que color es privada
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }
        void bark() {cout << "I can bark! Woof woof!!" << endl;}

};

int main(){
    Dog dog1;  // Se crea el objeto dog1 clase Dog
    // Metodos de la clase base (Animal)
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("blac");

    // Metodos de la clase Dog
    dog1.bark();
    dog1.setType("Doberman");
    // Se pasa el color por parametro
    dog1.displayInfo(dog1.getColor());

    return 0;
}