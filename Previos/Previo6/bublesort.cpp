#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    // Metodo burbuja para ordenar un array

    // Acceder a cada elemento
    for (int i = 0; i < size; i++) {
        // Comparar los elementos del array
        for (int j = 0; j < size - i - 1; j++) {
            // Intercambiar de posicion al mayor
            if (array[j] > array[j + 1]) {
                int temp = array[j];  // variable temporal para el cambio
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    // Imprime los valores del array
    for (int i = 0; i < size; i++) {
        cout << " "  << array[i];
    }
    cout << "\n";
}


int main() {
    int data[] = {-2, 45, 0, 11, 9};
    int size = sizeof(data) / sizeof(data[0]);    // Obtener la longitud del arreglo
    // Ordenar 
    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    // Imprimir el array
    printArray(data, size);

    return 0;
}
