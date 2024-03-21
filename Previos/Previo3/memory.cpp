#include <iostream>
using namespace std;

int main(){
    // Se inicializan las variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 16;

    // Imprimir la direccion de las variables
    cout << "Direccion de la variable1: " << &var1 << endl;
    cout << "Direccion de la variable2: " << &var2 << endl;
    cout << "Direccion de la variable3: " << &var3 << endl;
    // El & antes de la variable nos lleva a la direccion de memoria
    return 0;
}