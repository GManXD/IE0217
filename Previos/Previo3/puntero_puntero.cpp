#include <iostream>
using namespace std;

int main(){
    // Inicializar variable var
    int var = 2050;

    int* ptr_var;  // Declarar ptr_var tipo entero puntero
    // Asignando valor de la direccion de var
    ptr_var = &var;

    cout << "var: " << var << ", ptr_var : " << ptr_var << endl;

    // Ahora se declara un puntero del puntero 
    int** ptr_ptr_var;
    // Asignar el valor de la direccion del puntero de var
    ptr_ptr_var = &ptr_var;

    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    cout << "&ptr_var: " << &ptr_var << endl;
  
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;
    return 0;
    
}