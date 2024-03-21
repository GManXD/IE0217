#include <iostream>
using namespace std;

// Creando estructura Distance
struct Distance{
    int feet;
    float inch;

};

int main(){
    //  Declarando d tipo Distance y ptr tipo Distance puntero
    Distance *ptr, d;
    // Asignando valor al Distance puntero
    ptr = &d;

    cout << "Enter feet: ";
    // Asignando valor a feet con el puntero (referencia)
    cin >> (*ptr).feet;  // Forma 1
    cout << "Enter inch: ";
    // Asignando valor a inch con el puntero (referencia)
    cin >> (*ptr).inch;  // Forma 1

    // Imprimir información
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}