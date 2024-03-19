#include <iostream>
using namespace std;

int main() {
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;  // Cantidad de numeros

    for (i = 1; i <= n; ++i) {
        cout << "Enter n " << i << ": ";
        cin >> num;

        if (num < 0.0) {
            // Se hace el jump cuando num sea negativo
            goto jump;
        }
        sum += num;
    }
jump:  // Al hacer el jump, se calcula el promedio con la cantidad de numeros digitados al momento
    average = sum / (i-1);     // Promedio
    cout << "\nAverage = " << average;
    return 0;
}