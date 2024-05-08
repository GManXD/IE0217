#include "matriz.hpp"

template<class T>
Matriz<T>::Matriz(int filas, int columnas, vector<T>& valores) : filas(filas), columnas(columnas) {
    if (filas <= 0 || columnas <= 0){
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
    }

    matriz.resize(filas, vector<T>(columnas));

    int indiceLista = 0;
    for (int i = 0; i < filas; ++i){
        for(int j = 0; j < columnas; ++j){
            matriz[i][j] = valores[indiceLista];
            indiceLista++;
        }
    }
}

template<class T>
void Matriz<T>::setDimensiones(int filas, int columnas){
    this->filas = filas;
    this->columnas = columnas;
    matriz.resize(filas, vector<T>(columnas));
}

template<class T>
void Matriz<T>::llenarMatriz(){
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el valor para la fila " << i +1 << " y columna " << j + 1<< ": ";
            T valor;
            cin >> valor;
            matriz[i][j] = valor;
        }
    }
}

template<class T>
void Matriz<T>::mostrarMatriz(){
    for(int i = 0; i < filas; ++i){
        for (int j = 0; j < columnas; ++j){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

template<class T>
void Matriz<T>::Random(int tipo){
    srand(time(nullptr));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (tipo == 1) {
                matriz[i][j] = rand() % 101;
            }
            else if (tipo == 2) {
                matriz[i][j] = rand() % 101 + static_cast<float>(rand()) / RAND_MAX;
            }
            else if (tipo == 3){
                int parteReal = rand() % 101;
                int parteimaginaria = rand() % 101 ;
                std::complex<int> complejo(parteReal,parteimaginaria);
                //matriz[i][j] = static_cast<T> (complejo);
            }
        }
    }
}

template<class T>
Matriz<T> Matriz<T>::operator+(const Matriz<T>& otra) const {
    if (filas != otra.filas || columnas != otra.columnas) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para sumarse");
    }

    vector<T> v_resultado;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            v_resultado.push_back(matriz[i][j] + otra.matriz[i][j]);
        }
    }
    Matriz<T> resultado(filas, columnas, vector<T>(v_resultado));

    cout << "El resultado de la suma es: \n";
    resultado.mostrarMatriz();
    return resultado;
}

template<class T>
Matriz<T> Matriz<T>::operator-(const Matriz<T>& otra) const {
    if (filas != otra.filas || columnas != otra.columnas) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para restarse");
    }

    vector<T> v_resultado;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            v_resultado.push_back(matriz[i][j] - otra.matriz[i][j]);
        }
    }
    Matriz<T> resultado(filas, columnas, vector<T>(v_resultado));

    cout << "El resultado de la resta es: \n";
    resultado.mostrarMatriz();
    return resultado;
}

template<class T>
Matriz<T> Matriz<T>::operator*(const Matriz<T>& otra) const {
    if (columnas != otra.filas ) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para multiplicarse");
    }
    int filas_resultado = filas;
    int columnas_resultado = otra.columnas;

    vector<T> v_resultado;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            v_resultado.push_back(matriz[i][j] + otra.matriz[i][j]);
        }
    }
    Matriz<T> resultado(filas, columnas, vector<T>(v_resultado));

    cout << "El resultado de la multiplicación es: \n";
    resultado.mostrarMatriz();
    return resultado;
}

template<class T>
Matriz<T>::~Matriz() {}

template<typename N>
vector <N> preguntarValores(int filas, int columnas){
    vector<N> valores;
    cout << "Digite los valores con los que se rellenara la primera columna, luego la segunda columna y asi sucesivamente" << endl;
    for (int i = 0 ; i < filas * columnas; ++i){
        N dato;
        cout << "Dato (" << i+1 << "): " << endl;
        cin >> dato;
        valores.push_back(dato);
    }

    return valores;
};
