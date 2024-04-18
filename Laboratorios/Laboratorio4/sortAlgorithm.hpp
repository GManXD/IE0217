#ifndef SORT_HPP    // Definir si no lo está
#define SORT_HPP    

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n);
    // Metodo burbuja para ordenar arreglos

void selectionSort(int arr[], int n);

void insertionSort(int arr[], int n);

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

void generateRandomArray(int arr[], int n);

void measuringSortTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName);

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName);

#endif //SORT_HPP