// Uso del if anidado para verificar el signo y valor de un número
#include <iostream>
int main() {
    int num;
    std::cout << "Introduzca un entero: ";  // Stdout
    std::cin >> num;  // Stdin

    if (num != 0) {
        if (num > 0) {  // If anidado
            std::cout << "El numero es positivo";
        }
        else{  // Else del if anidado
            std::cout << "El numero es negativo ";
        }
    }
    else {  // else del primer if
        std::cout << "El numero es igual a 0 y no es ni positivo ni negativo";
    }
    // Codigo fuera de los if
    std::cout << "\nEsta linea siempre se imprime";

    return 0;
}