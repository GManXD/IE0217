#include <iostream>
using namespace std;

class Mammal{
    public:
        Mammal(){  // Constructor de clase
            cout << "Mammals can give direct birth." << endl;

        }
};

class WingedAnimal{
    public:
        WingedAnimal(){ // Constructor de clase
            cout << "Winged animal can falp." << endl;
        }
};

class Bat: public Mammal, public WingedAnimal {}; // Herencia multiple

int main(){
    Bat b1;  // Objeto de la clase Bat que hereda de las clases Mammal y WingedAnimal

    return 0;
}