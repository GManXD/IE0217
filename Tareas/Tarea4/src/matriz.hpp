#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <vector>
#include <complex>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <type_traits>

using namespace std;

enum opciones{
    CAMBIAR_DIMENSIONES_Y_VALORES = 1,
    OPERACION,
    GENERAR_DATOS_ALEATORIOS,
    MOSTRAR_MATRICES,
    SALIR,
    OPCIONES_MAX
};

template <class T>
class Matriz{
    private: 
        int filas;
        int columnas;
        vector<vector<T>> matriz;
        
    public:
        Matriz(int filas, int columnas, vector<T>& valores);
        void setDimensiones(int filas, int columnas);
        void llenarMatriz();
        void mostrarMatriz();
        void Random(int tipo);
        Matriz<T> operator+(const Matriz<T>& otra) const;
        Matriz<T> operator-(const Matriz<T>& otra) const;
        Matriz<T> operator*(const Matriz<T>& otra) const;
        ~Matriz();
};

template <typename N>
vector <N> preguntarValores(int filas, int columnas);

#endif
