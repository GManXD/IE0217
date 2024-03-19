#include <iostream>
using namespace std;

int factorial(int);  // Prototipo

int main(){
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;
    // Se llama a la funcion
    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

// Se define la funcion factorial()
int factorial(int n){
    if (n > 1) {
        // factorial(n)= n*factorial(n-1)
        return n* factorial(n-1);

    }
    else{
        // factorial(0) = 1
        return 1;
    }
}