#include <iostream>
using namespace std;

class A {
    public: 
        void display(){
            cout << "Base class content";
        }
};

class B : public A {}; // Hereda de la clase A

class C : public B {}; // Hereda de la clase B

int main() {
    C obj;  // Objeto de la clase C
    obj.display();  // Metodo de la clase A

    return 0;
}