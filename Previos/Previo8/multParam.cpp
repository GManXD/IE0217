#include <iostream>
using namespace std;

// Plantilla con multiples parametros
template <typename T, typename U>
T multiply(T a, U b){
    // Retorna la multiplicacion de a y b
    return (a*b);
}

int main(){
    int a=3;
    double b=4.5;

    //Llamar a la plantilla con multiples parametros con diferentes tipos de datos
    int result = multiply<int>(a,b);
    cout << result << endl;


    return 0;
}