#include <iostream>
using namespace std;  // para poder usar el cout

int main() {
    char oper;
    float num1, num2;
    cout << "Ingrese un operador " << endl;
    cin >> oper;
    cout << "Ingrese dos numeros " << endl;
    cin >> num1 >> num2;
    switch (oper)  {
    case '+':   // Caso suma
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;  // Los break para salir del switch
    case '-':  // Caso resta
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':  // Caso multiplicacion
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':  // Caso division
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:  // Si ningun caso cumple
        cout << "El operador es incorrecto\n";
        break;
    }
}