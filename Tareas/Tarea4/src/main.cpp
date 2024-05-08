#include <iostream>
#include <vector>
#include <complex>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <type_traits> // para comparar los tipos de dato en la generacion aleatoria de valores

using namespace std;

class  OperacionesBasicas{

};

class ValidadorDeEntrada{

};

enum opciones{
    // Opciones disponibles para el menu
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
        vector<vector<T>> matriz; // Matriz de elementos de tipo T     
        
    public:
        Matriz(int filas, int columnas, vector<T>& valores) : filas(filas), columnas(columnas) {  // Constructor
            // Valores es una lista de valores a ingresar
            if (filas <= 0 || columnas <= 0){
                // Caso de filas o columnas negativas, tirar excepcion
                throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
            }

            matriz.resize(filas, vector<T>(columnas));      // Agregar las dimensiones de la matriz

            int indiceLista = 0;
            for (int i = 0; i < filas; ++i){  // Rellenar la matriz con los valores iniciales dados
                for(int j = 0; j < columnas; ++j){
                    matriz[i][j] = valores[indiceLista];
                    indiceLista++;
                }
            }

        }

        void setDimensiones(int filas, int columnas){
            // Redimensiona la matriz
            this->filas = filas;
            this->columnas = columnas;
            matriz.resize(filas, vector<T>(columnas));
        }

        void llenarMatriz(){
            // Rellena la matriz con valores dados por el usuario
            for (int i = 0; i < filas; ++i) {
                for (int j = 0; j < columnas; ++j) {
                    cout << "Ingrese el valor para la fila " << i +1 << " y columna " << j + 1<< ": ";
                    T valor;
                    cin >> valor;
                    matriz[i][j] = valor;
                }
            }
        }

        void mostrarMatriz(){
            for(int i = 0; i < filas; ++i){
                for (int j = 0; j < columnas; ++j){
                    cout << matriz[i][j] << " ";
                }
                cout << endl;  // Salto de linea entre filas
            }
        }

        void Random(int tipo){
            // Genera valores random para la matriz
                
            srand(time(nullptr));  // Semilla para generar numeros random

            for (int i = 0; i < filas; ++i) {
                for (int j = 0; j < columnas; ++j) {
                    if (tipo == 1) { // Caso de que T sea int
                        matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
                    }
                    else if (tipo == 2) {    // Caso de que T sea float
                        matriz[i][j] = rand() % 101 + static_cast<float>(rand()) / RAND_MAX; // Números aleatorios entre 0 y 100 + decimales aleatorios
                    }
                    else if (tipo == 3){    // Caso de que T sea complex
                        int parteReal = rand() % 101; // Números aleatorios entre 0 y 100
                        int parteimaginaria = rand() % 101 ; // Números aleatorios entre 0 y 100 
                        std::complex<int> complejo(parteReal,parteimaginaria);
                        //matriz[i][j] = static_cast<T> (complejo);
                    }
                }
            }
        }

        Matriz<T> operator+(const Matriz<T>& otra) const {
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

        Matriz<T> operator-(const Matriz<T>& otra) const {
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

            cout << "El resultado de la suma es: \n";
            resultado.mostrarMatriz();
            return resultado;
        }

        Matriz<T> operator*(const Matriz<T>& otra) const {
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

            cout << "El resultado de la suma es: \n";
            resultado.mostrarMatriz();
            return resultado;
        }

        ~Matriz(){  // Destructor
        }

};

template <typename N>
vector <N> preguntarValores(int filas, int columnas){
    vector<N> valores;
    cout << "Digite los valores con los que se rellenara la primera columna, luego la segunda columna y asi susecivamente" << endl;
    for (int i = 0 ; i < filas * columnas; ++i){
        N dato;
        cout << "Dato (" << i+1 << "): " << endl;
        cin >> dato;
        valores.push_back(dato);
    }

    return valores;
};


int main(){
    vector<pair<void*, int>> punteros;
    int tipo;
    int filas, columnas;

    cout << "Se debe crear 2 matrices." << endl;

    for (int i = 0; i < 2; ++i) {
        cout << "Matriz " << i + 1 << ":" << endl;

        cout << "Indique la cantidad de columnas :" << endl;
        cin >> columnas;
        cout << "Indique la cantidad de filas: " << endl;
        cin >> filas;

        if (filas <= 0 || columnas <= 0) {  
            throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
        }

        cout << "Indique el tipo de dato de la matriz (Escriba el numero correspondiente a la opcion): "
            << "\n1. int" << "\n2. float" << "\n3. Complex" << endl;
        cin >> tipo;

        if (tipo == 1) {
            vector<int> valores = preguntarValores<int>(filas, columnas);
            punteros.push_back({ new Matriz<int>(filas, columnas, valores), tipo });
        }
        else if (tipo == 2) {
            vector<float> valores = preguntarValores<float>(filas, columnas);
            punteros.push_back({ new Matriz<float>(filas, columnas, valores), tipo });
        }
        else if (tipo == 3) {
            vector<complex<int>> valores = preguntarValores<complex<int>>(filas, columnas);
            punteros.push_back({ new Matriz<complex<int>>(filas, columnas, valores), tipo });
        }
        else {
            cout << "Opción invalida." << endl;
            throw std::invalid_argument("La entrada debe ser un numero entero del 1 al 3");
        }
    }
    // PARTE MENU
    int opcion;
    do{
        cout << "Seleccione su opcion" << endl;
        cout << "1. Cambiar dimensiones y valores de la matriz " << endl;
        cout << "2. Realizar operacion con las matrices" << endl;
        cout << "3. Generar datos aleatorios en las matrices" << endl;
        cout << "4. Mostrar las matrices" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5) {
            throw std::invalid_argument("Debe seleccionar una opcion valida");
        }
        // Casos del menu
        switch (opcion){
            case CAMBIAR_DIMENSIONES_Y_VALORES:
                int numMatriz;      // Cual matriz va a ser modificada
                int nuevasFilas;    // Nuevas filas
                int nuevasColumnas; // Nuevas columnas

                cout << "Cual matriz desea cambiar? (Seleccione el numero correspondiente)" << "\n1. Matriz 1 \n2. Matriz 2" << endl;
                cin >> numMatriz;
                if (numMatriz !=1 && numMatriz !=2) {
                    throw std::invalid_argument("Debe seleccionar la Matriz 1 o la Matriz2");
                }
                cout << "Indique la nueva cantidad de filas: " << endl;
                cin >> nuevasFilas;
                cout << "Indique la nueva cantidad de columnas: " << endl;
                cin >> nuevasColumnas;

                if (nuevasFilas <= 0 || nuevasColumnas <= 0) {
                    throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
                }

                cout << "Ingrese los nuevos valores para la matriz " << numMatriz << ":" << endl;
                if (punteros[numMatriz - 1].second == 1) {
                    Matriz<int>* matriz_int = static_cast<Matriz<int>*>(punteros[numMatriz - 1].first);
                    matriz_int->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_int->llenarMatriz();
                } else if (punteros[numMatriz - 1].second == 2) {
                    Matriz<float>* matriz_float = static_cast<Matriz<float>*>(punteros[numMatriz - 1].first);
                    matriz_float->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_float->llenarMatriz();
                } else if (punteros[numMatriz - 1].second == 3) {
                    Matriz<complex<int>>* matriz_complex = static_cast<Matriz<complex<int>>*>(punteros[numMatriz - 1].first);
                    matriz_complex->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_complex->llenarMatriz();
                } else {
                    cout << "Tipo de dato para la matriz no valido." << endl;
                }
                break;

            case OPERACION:
                // Realizar operaciones con las matrices
                int operador;
                cout << "Que operacion desea realizar (elija un numero): \n1. Suma \n2. Resta \n3. Multiplicacion." << endl;
                cin >> operador;
                if (operador != 1 && operador != 2 && operador != 3) {
                    throw std::invalid_argument("Debe seleccionar una opcion valida");
                }


                break;
            case GENERAR_DATOS_ALEATORIOS:
                // Generar datos aleatorios en las matrices
                for (int i = 0; i < 2; ++i) {
                    if (punteros[i].second == 1) {
                        Matriz<int>* matriz_int = static_cast<Matriz<int>*>(punteros[i].first);
                        // Generar los valores aleatorios
                        matriz_int->Random(1);  // Le pasa el tipo de dato de la plantillas
                    }
                    else if (punteros[i].second == 2) {
                        Matriz<float>* matriz_float = static_cast<Matriz<float>*>(punteros[i].first);
                        // Generar los valores aleatorios
                        matriz_float->Random(2);   // Le pasa el tipo de dato de la plantillas
                    }
                    else if (punteros[i].second == 3) {
                        Matriz<complex<int>>* matriz_complex = static_cast<Matriz<complex<int>>*>(punteros[i].first);
                        // Generar los valores aleatorios
                        matriz_complex->Random(3);     // Le pasa el tipo de dato de la plantillas
                    }
                    else {
                        cout << "Tipo de matriz no válido." << endl;
                    }
                    cout << endl;
                }
                break;
            case MOSTRAR_MATRICES:
                // Mostrar las matrices
                cout << "Matrices almacenadas:" << endl;
                for (int i = 0; i < 2; ++i) {
                    cout << "Matriz " << i + 1 << ":" << endl;
                    if (punteros[i].second == 1) {
                        Matriz<int>* matriz_int = static_cast<Matriz<int>*>(punteros[i].first);
                        // Imprimir la matriz
                        matriz_int->mostrarMatriz();
                    }
                    else if (punteros[i].second == 2) {
                        Matriz<float>* matriz_float = static_cast<Matriz<float>*>(punteros[i].first);
                        // Imprimir la matriz
                        matriz_float->mostrarMatriz();
                    }
                    else if (punteros[i].second == 3) {
                        Matriz<complex<int>>* matriz_complex = static_cast<Matriz<complex<int>>*>(punteros[i].first);
                        // Imprimir la matriz
                        matriz_complex->mostrarMatriz();
                    }
                    else {
                        cout << "Tipo de matriz no válido." << endl;
                    }
                    cout << endl;
                }
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                break;
        }
    } while (opcion != SALIR);

    // Liberar memoria de las matrices
    for (auto& matriz : punteros) {
        if (matriz.second == 1) {
            delete static_cast<Matriz<int>*>(matriz.first);
        } else if (matriz.second == 2) {
            delete static_cast<Matriz<float>*>(matriz.first);
        } else if (matriz.second == 3) {
            delete static_cast<Matriz<complex<int>>*>(matriz.first);
        }
    }
    return 0;
}