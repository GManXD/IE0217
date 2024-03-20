#include <iostream>
using namespace std;

int main(){
    int var = 5;

    // Se declara la variable tipo puntero
    int* pointVar;
    // Se asigna valor a pointVar
    pointVar = &var;

    cout << "var = " << var << endl;


    // Imprimir direccion de la variable var
    cout << "Direccion de var (&var): " << &var << endl;

    // Imprimir valor de la variable pointVar
    cout << "pointVar = " << pointVar << endl;

    // imprimir contenido de la direccion que pointVar apunta a
    cout << "Contenido de la direccion apuntada por pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}