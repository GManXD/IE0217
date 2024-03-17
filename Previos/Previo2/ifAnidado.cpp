#include <iostream>
int main() {
    int num;
    std::cout << "Introduzca un entero: ";
    std::cin >> num;

    if (num != 0) {
        if (num > 0) {
            std::cout << "El numero es positivo";
        }
        else{
            std::cout << "El numero es negativo ";
        }
    }
    else {
        std::cout << "El numero es igual a 0 y no es ni positivo ni negativo";
    }
    
    std::cout << "\nEsta linea siempre se imprime";

    return 0;
}