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
    int tipo1, tipo2;
    int filas1, columnas1, filas2, columnas2;

    cout << "Se debe crear 2 matrices. \nMatriz1 :" << endl;

    cout << "Indique la cantidad de columnas :" << endl;
    cin >> columnas1;
    cout << "Indique la cantidad de filas: " << endl;
    cin >> filas1;
    if (filas1 <= 0 || columnas1 <= 0) {  // Caso de que filas o columnas no positivas, lanzar excepcion
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
    }

    cout << "\nIndique el tipo de dato de la primera matriz (Escriba el numero correspondiente a la opcion): " 
    << "\n1. int" << "\n2. float" << "\n3. Complex" << endl;
    cin >> tipo1;

    if (tipo1 == 1){
        vector<int> valores1 = preguntarValores<int>(filas1, columnas1); // Plantilla de funcion con int
        Matriz<int> obj1(filas1, columnas1, valores1);       // Plantilla de clase con int


    }
    else if (tipo1 == 2){
        vector<float> valores1 = preguntarValores<float>(filas1, columnas1);     // Plantilla de funcion con float
        Matriz<float> obj1(filas1, columnas1, valores1);     // Plantilla de clase con float
    }
    else if (tipo1 == 3){
        vector<complex<float>> valores1 = preguntarValores<complex<float>>(filas1, columnas1);  // Plantilla de funcion con complex
        Matriz<complex<float>> obj1(filas1, columnas1, valores1);    // Plantilla de clase con complex
    }


    cout << "\nMatriz2 :" << endl;

    cout << "Indique la cantidad de columnas :" << endl;
    cin >> columnas2;
    cout << "Indique la cantidad de filas: " << endl;
    cin >> filas2;
    if (filas2 <= 0 || columnas2 <= 0) {  // Caso de que filas o columnas no positivas, lanzar excepcion
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas");
    }

    cout << "\nIndique el tipo de dato de la segunda matriz (Escriba el numero correspondiente a la opcion): " 
    << "\n1. int" << "\n2. float" << "\n3. Complex" << endl;
    cin >> tipo2;

    if (tipo2 == 1){
        vector<int> valores2 = preguntarValores<int>(filas2, columnas2); // Plantilla de funcion con int
        Matriz<int> obj2(filas2, columnas2, valores2);       // Plantilla de clase con int

    }
    else if (tipo2 == 2){
        vector<float> valores2 = preguntarValores<float>(filas2, columnas2);     // Plantilla de funcion con float
        Matriz<float> obj2(filas2, columnas2, valores2);     // Plantilla de clase con float
    }
    else if (tipo2 == 3){
        vector<complex<float>> valores2 = preguntarValores<complex<float>>(filas2, columnas2);  // Plantilla de funcion con complex

        Matriz<complex<float>> obj2(filas2, columnas2, valores2);    // Plantilla de clase con complex
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
                // Cambiar dimensiones y valores de la matriz
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

    return 0;
}