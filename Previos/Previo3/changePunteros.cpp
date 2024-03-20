#include <iostream>
using namespace std;

int main(){
    int var = 5;
    // pointVar tipo puntero
    int* pointVar;
    pointVar = &var;  // Asignando valor a pointVar

    // Imprimir valor de var
    cout << "var = " << var << endl;

    // Imprimir *pointVar (valor que hay en la direccion de memoria de var)
    cout << "*pointVar = " << *pointVar << endl
         << endl;
    
    cout << "Cambiando el valor de var a 7:" << endl;

    //Cambiar el valor de var a 7
    var = 7;

    //Imprimir var 
    cout << "var = " << var << endl;

    // Imprimir *pointVar (valor que hay en la direccion de memoria de var)
    cout << "*pointVar = " << *pointVar << endl
         << endl;


    cout << "Cambiando el valor de var a 16:" << endl;

    //Cambiar el valor de var a 16
    *pointVar = 16;

    //Imprimir var 
    cout << "var = " << var << endl;

    // Imprimir *pointVar (valor que hay en la direccion de memoria de var)
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}