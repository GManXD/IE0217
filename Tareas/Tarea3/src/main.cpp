#include "gestor.hpp"

using namespace std;


int main(){
    int tamano = 10;
    Contactos contactos;    // Lista enlazada para la memoria del celular
    HashTable tablaHash = HashTable(tamano);   // Hash table para la memoria cloud
    int opcion;
    do{
        cout << "Seleccione su opcion" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Eliminar contacto" << endl;
        cout << "3. Imprimir Hash-Table y Listas Enlazadas" << endl;
        cout << "4. Mostrar contactos" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        // Casos del menu
        switch (opcion){
            case AGREGAR_CONTACTO:
                // Funcion de agregar contacto
                agregarContacto(contactos, tablaHash);
                break;
            case ELIMINAR_CONTACTO:
                // Funcion de eliminar contacto
                EliminarContacto(contactos, tablaHash);
                break;
            case IMPRIMIR_CLOUD:
                // Funcion de imprimir hash table y listas enlazadas
                tablaHash.mostrar();
                break;
            case MOSTRAR_CONTACTOS:
                // Funcion de mostrar contactos
                contactos.mostrar();
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


    return 0;
}