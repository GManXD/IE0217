#include <iostream>
using namespace std;

class Distance{
    private: 
        int meter;

        // Funcion amiga:
        friend int addFive(Distance);
    
    public:
        // Constructor de la clase
        Distance() : meter(0) {}
};

int addFive(Distance d){
    // Funcion amiga que accesa a la variable privada "meter"
    d.meter += 5;
    return d.meter;
}

int main(){
    Distance D;  // Instanciando objeto
    cout << "Distance: " << addFive(D);

    return 0;
}