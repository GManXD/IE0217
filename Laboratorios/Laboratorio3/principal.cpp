#include "libro.hpp"
using namespace std;


int main(){
    // Primer Libro puntero que no apunta a nada
    Libro* listaLibros = nullptr;
    int opcion;
    do{
        cout << "Seleccione su opcion" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        // Casos del menu
        switch (opcion){
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no permitida. " << endl;
                break;
        }
    } while (opcion != SALIR);
    // Liberar la memoria dinamica utilizada
    liberarMemoria(listaLibros);

    return 0;
}