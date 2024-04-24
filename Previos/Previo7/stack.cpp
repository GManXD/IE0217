#include <iostream>
#include <stack>

using namespace std;

int main() {

    // Crear un stack de tipo int
    stack<int> numbers;

    // Hacer push al stack

    numbers.push(1);
    numbers.push(100);
    numbers.push(10);


    // Imprimir el stack
    cout << "Numbers are: ";
    
    // Se accede mientras no se encuentre vacio
    while(!numbers.empty()){
        cout << numbers.top() << ", ";

        // Hacer pop al elemento de arriba del stack
        numbers.pop();
    }

    return 0;
}
