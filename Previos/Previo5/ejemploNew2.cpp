#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    // Declarar puntero float
    float *ptr;

    // Asignar memoria dinamica de una lista de flotantes
    ptr = new float[num];

    cout << "Enter GPA of students. " << endl;
    for (int i = 0; i < num; ++i){
        cout << "Student" << i +1 << ": ";
        // Asignar valor a los espacios de memoria
        cin >> *(ptr + 1);

    }

    cout << "\nDisplaying GPA of students. " << endl;
    for (int i = 0; i < num; ++i ){
        // Imprimir valores
        cout << "Student" << i+1 << ": " << *(ptr+1) << endl;

    }

    // Liberar memoria
    delete[] ptr;

    return 0;
}