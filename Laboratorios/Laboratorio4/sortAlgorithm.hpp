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
    // Metodo selection para ordenar arreglos

void insertionSort(int arr[], int n);
    // Metodo insertion para ordenar arreglos

int partition(int arr[], int low, int high);
    // Particiona un arreglo para el metodo quick

void quickSort(int arr[], int low, int high);
    // Metodo Quick para ordenar arreglos

void generateRandomArray(int arr[], int n);
    // Genera un array con elementos desordenados, de forma aleatoria

void measuringSortTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName);
    // Mide el tiempo que le toma a un algoritmo de ordenamiento para finalizar

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName);
    // Mide el tiempo que le toma al algoritmo de ordenamiento quick para finalizar 

#endif //SORT_HPP