#include <iostream>
using namespace std;

void bubblesort(int array[], int size) {
    // Metodo burbuja optimizado

    // Acceder a cada elemento del array
    for (int step = 0; step < (size - 1); ++step) {
        // Comprobar si se produce un intercambio
        int swapped = 0;

        // Bucle para comparar dos elementos
        for (int i = 0; i < (size - step - 1); ++i) {
            // Comparar dos elementos del array
            if (array[i] > array[i + 1]) {
                // Cambiar si es mayor que el que sigue
                int temp = array[i];   // Variable temporal para hacer el cambio
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }

        // Si no se produce ningún intercambio, el array ya está ordenado
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int array[], int size){
    // Imprimir elementos del array
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, 9};
    int size = sizeof(data) / sizeof(data[0]);    // Obtener la longitud del arreglo
    // Ordenar 
    bubblesort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    // Imprimir el array
    printArray(data, size);

    return 0;

}
