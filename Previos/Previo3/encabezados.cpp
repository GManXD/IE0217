#include <iostream>
#include "sum.hpp"  // Encabezado donde se define sum

int main() {
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);  // Se llama sum
    std::cout << "El resultado de la suma de " << num1 << " y " << num2 << " es: " << result;
    return 0;
}