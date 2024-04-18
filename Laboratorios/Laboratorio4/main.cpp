// Programa que imprime el tiempo que tarda cada algoritmo en ordenar una lista de 10000 elementos

#include "sortAlgorithm.hpp"
using namespace std;
using namespace std::chrono;

int main(){
    const int SIZE = 10000;  // Tamaño del arreglo
    int arr[SIZE];

    generateRandomArray(arr, SIZE);  // Generar un arreglo desordenado 
    measuringSortTime(bubbleSort, arr, SIZE, "Buble Sort");     // Ordenar con el metodo buble
    generateRandomArray(arr, SIZE); // Desordenar un arreglo
    measuringSortTime(selectionSort, arr, SIZE, "Selection Sort");  // Ordenar con el metodo Selection
    generateRandomArray(arr, SIZE); // Desordenar un arreglo
    measuringSortTime(insertionSort, arr, SIZE, "Insertion Sort");  // Ordenar con el metodo insertion
    generateRandomArray(arr, SIZE); // Desordenar un arreglo
    measuringQuickSortTime(quickSort, arr, 0, SIZE -1, "Quick Sort");   // Ordenar con el metodo quick

    return 0;
}