#include <iostream>
using namespace std;

// Plantilla de clase
template <class T>
class Number {
    private:
        // Variable de tipo T
        T num;

    public:
        // Constructor
        Number(T n) : num(n) {}

        // Metodo que retorna una variable de tipo T
        T getNum();  // Prototipo de funcion
};

// Definicion de la funcion
template <class T>
T Number<T>::getNum(){
    return num;
}


int main() {
    // Crear object con parametro tipo int 
    Number<int> numberInt(7);

    // Crear object con parametro tipo double
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
