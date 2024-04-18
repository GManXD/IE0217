#include "sortAlgorithm.hpp"
using namespace std;
using namespace std::chrono;

int main(){
    const int SIZE = 10000;
    int arr[SIZE];

    generateRandomArray(arr, SIZE);

    measuringSortTime(bubbleSort, arr, SIZE, "Buble Sort");
    generateRandomArray(arr, SIZE);
    measuringSortTime(selectionSort, arr, SIZE, "Selection Sort");
    generateRandomArray(arr, SIZE);
    measuringSortTime(insertionSort, arr, SIZE, "Insertion Sort");
    generateRandomArray(arr, SIZE);
    measuringQuickSortTime(quickSort, arr, 0, SIZE -1, "Quick Sort");

    return 0;
}