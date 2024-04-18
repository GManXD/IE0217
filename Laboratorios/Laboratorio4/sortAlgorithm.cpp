#include "sortAlgorithm.hpp"
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    // Metodo burbuja para ordenar arreglos

    // Acceder a cada elemento
    for (int i = 0; i < n - 1; ++i) {
        // Comparar los elementos del array
        for (int j = 0; j < n - i - 1; ++j) {
            // Intercambiar de posicion al mayor
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];  // Variable temporal para el cambio
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    // Metodo selectionSort
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            // Encontrar el elemento minimo en cada step
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Intercambiar la posicion del minimo con la posicion del elemento en step
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {
    // Metodo insertion
    for (int i = 1; i < n; ++i) {
        int key = arr[i];   // Variable temporal para el cambio
        int j = i - 1;
        // Comparar key con cada elemento a la izquierda de el hasta que encuentre un elemento menor
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    // Funcion utilizada por la funcion quickSort para particionar un arreglo utilizando pivotes
    // Este coloca los elementos menores al pivote en una lista y los elementos mayores a el en otra lista
    int pivot = arr[high];  // Seleccion del pivot
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];  // Variable temporal para hacer el cambio
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    // Metodo quick
    // Este metodo utiliza la funcion partition()
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // Recursivo
        quickSort(arr, pi + 1, high); // Recursivo
    }
}

void generateRandomArray(int arr[], int n){
    // Genera un array con elementos desordenados, de forma aleatoria
    srand(time(0));
    for (int i = 0; i < n; ++i){
        arr[i] = rand() % 10000;
    }
}

void measuringSortTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName){
    // Mide el tiempo que le toma a un algoritmo de ordenamiento para finalizar
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Inicio de la medicion
    sortingAlgorithm(arr, n);
    high_resolution_clock::time_point stop = high_resolution_clock::now();  // Final de la medicion
    std::chrono::microseconds duration = std::chrono::duration_cast < std::chrono::microseconds>(stop-start);  // Duracion

    std::cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;

}

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName){
    // Mide el tiempo que le toma al algoritmo de ordenamiento quick para finalizar
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Inicio de la medicion
    sortingAlgorithm(arr,low, high);
    high_resolution_clock::time_point stop = high_resolution_clock::now();  // Final de la medicion
    std::chrono::microseconds duration = std::chrono::duration_cast < std::chrono::microseconds>(stop-start);  // Duracion

    std::cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;

}
