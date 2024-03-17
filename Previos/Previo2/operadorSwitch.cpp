// Uso del switch para imprimir diferentes mensajes dependiendo del caso
#include<iostream>
int main() {
    std::cout << "Hola Mundo, estudiantes de IE0217!\n" ;
    int var1 = 1;
    //int var2 = 2;
    //int var3 = 3;
    switch (var1)
    {
    case 1:  // Casp var1 = 1
        std::cout << "Caso1!\n";
        break;
    case 2:  // Caso var1 = 2
        std::cout << "Caso2!\n";
        break;
    case 3:  // Caso var1 = 3
        std::cout << "Caso3!\n";
        break;
    default:  // Si ningun caso cumple
        break;
    }
}