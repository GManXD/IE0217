#include <iostream>
#include <vector>
#include <complex>
#include <stdexcept>

using namespace std;

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
                    cout << "Ingrese el valor para la fila " << i << " y columna " << j << ": ";
                    T valor;
                    cin >> valor;
                }
            }
        }

        ~Matriz(){  // Destructor
        }

};

template <typename N>
vector <N> preguntarValores(int filas, int columnas){
    vector<N> valores;
    cout << "Digite los valores con los que se rellenara la primera columna, luego la segunda columna y asi susecivamente" << endl;
    for (int i = 0 ; i < filas * columnas; ++i){
        int dato;
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
            vector<complex<float>> valores = preguntarValores<complex<float>>(filas, columnas);
            punteros.push_back({ new Matriz<complex<float>>(filas, columnas, valores), tipo });
        }
        else {
            cout << "Opción inválida." << endl;
            --i; // Para repetir la iteración y volver a solicitar la entrada del usuario
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
        // Casos del menu
        switch (opcion){
            case CAMBIAR_DIMENSIONES_Y_VALORES:
                int num_matriz;
                int nuevasFilas;
                int nuevasColumnas;
                cout << "Cual matriz desea cambiar? (Seleccione el numero correspondiente)" << "\n1. Matriz 1 \n2. Matriz 2" << endl;
                cin >> num_matriz;
                cout << "Indique la nueva cantidad de filas: " << endl;
                cin >> nuevasFilas;
                cout << "Indique la nueva cantidad de columnas: " << endl;
                cin >> nuevasColumnas;

                if (nuevasFilas <= 0 || nuevasColumnas <= 0) {
                    throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
                }

                cout << "Ingrese los nuevos valores para la matriz " << num_matriz << ":" << endl;
                if (punteros[num_matriz - 1].second == 1) {
                    Matriz<int>* matriz_int = static_cast<Matriz<int>*>(punteros[num_matriz - 1].first);
                    vector<int> nuevos_valores = preguntarValores<int>(nuevasFilas, nuevasColumnas);
                    matriz_int->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_int->llenarMatriz();
                } else if (punteros[num_matriz - 1].second == 2) {
                    Matriz<float>* matriz_float = static_cast<Matriz<float>*>(punteros[num_matriz - 1].first);
                    vector<float> nuevos_valores = preguntarValores<float>(nuevasFilas, nuevasColumnas);
                    matriz_float->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_float->llenarMatriz();
                } else if (punteros[num_matriz - 1].second == 3) {
                    Matriz<complex<float>>* matriz_complex = static_cast<Matriz<complex<float>>*>(punteros[num_matriz - 1].first);
                    vector<complex<float>> nuevos_valores = preguntarValores<complex<float>>(nuevasFilas, nuevasColumnas);
                    matriz_complex->setDimensiones(nuevasFilas, nuevasColumnas);
                    // Llenar la matriz con los nuevos valores
                    matriz_complex->llenarMatriz();
                } else {
                    cout << "Tipo de matriz no válido." << endl;
                }
                break;
                
            case OPERACION:
                // Realizar operaciones con las matrices
                break;
            case GENERAR_DATOS_ALEATORIOS:
                // Generar datos aleatorios en las matrices

                break;
            case MOSTRAR_MATRICES:
                // Mostrar las matrices

                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no permitida. " << endl;
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
            delete static_cast<Matriz<complex<float>>*>(matriz.first);
        }
    }
    return 0;
}