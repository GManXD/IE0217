#include <iostream>
using namespace std;

// Plantilla
template <typename T>
T add(T num1, T num2){
    return (num1+num2);
}

int main(){
    int result1;
    double result2;

    //Llamar a la plantilla con parametros tipo entero
    result1 = add<int>(2,3);
    cout << result1 << endl;

    // Llamar a la plantilla con parametros tipo double
    result2 = add<double>(2.2, 3.3);
    cout << result1 << endl;

    return 0;
}