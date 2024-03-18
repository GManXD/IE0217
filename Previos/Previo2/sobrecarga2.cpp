#include <iostream>
using namespace std;  // para poder usar el cout

// Funcion absolute que utiliza la variable tipo float
float absolute(float var){
    if (var < 0.0){
        var = -var;
    }
    return var;
}

// Funcion absolute que utiliza la variable tipo int
int absolute(int var){
    if (var < 0 ){
        var = -var;
    }
    return var;
}

int main(){
    // Se llama a la funcion absolute utilizando un entero
    cout << "El valor absoluto de -5 es: " << absolute(-5) << endl;
    // Se llama a la funcion absolute utilizando un float
    cout << "El valor absoluto de -5.5 es : " << absolute(-5.5f) << endl;

    return 0 ;
}