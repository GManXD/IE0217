// Archivo que imprime un HolaMundo y utiliza el operador "?" para asignar valores a var2
#include<iostream>

int main() {
    std::cout << "Hola Mundo, estudiantes de IE0217!\n" ;
    int var1 = 0;
    int var2;
    // Si var1 == 0, var2 = 15, de otra forma var2 = 27
    var2 = (var1 == 0) ? 15:27;
    std::cout << "var2: \n"<< var2 <<"";
    return 0;
}