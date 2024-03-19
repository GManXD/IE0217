#include <iostream>
using namespace std;

int main(){
    // Asignando un valor entero
    int num_int = 9;
    // Declarando una variable double
    double num_double;

    // Conversión implicita
    num_double = num_int;

    cout << "num_int: " << num_int << endl;
    cout << "num_double: " << num_double << endl;
    
    return 0;
}