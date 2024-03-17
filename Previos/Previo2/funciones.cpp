#include <iostream>
using namespace std;  // para poder usar el cout

// Se declara la funcion displayNum antes del main(), a menos que se use un prototipo
void displayNum(int n1, double n2) { 
    cout << "El numero entero es: " << n1 << endl;
    cout << "El numero double es: " << n2 << endl;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    // Se llama a la funcion displayNum:
    displayNum(num1, num2);
    return 0;
}