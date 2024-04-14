#include <iostream>
using namespace std;

void swap(int *a, int *b){
    // Intercambiar la posicion de 2 elementos
    int temp = *a; // Variable temporal para hacer el intercambio
    *a = *b;
    *b = temp;

}

void printArray(int array[], int size){
    // Imprime los elementos del arreglo
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size){
    // Metodo selectionSort
    for (int step = 0; step < size - 1; step++){
        int min_idx = step;
        for (int i = step + 1; i < size; i++){
            // Encontrar el elemento minimo en cada step
            if (array[i] < array[min_idx]){
                min_idx = i;
            }
            // Intercambiar la posicion del minimo con la posicion del elemento en step
            swap(&array[min_idx], &array[step]);
        }
    }
}

int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);    // Obtener la longitud del arreglo
    // Ordenar 
    selectionSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    // Imprimir el array
    printArray(data, size);

    return 0;

}