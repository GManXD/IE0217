#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Node{
    // Nodos para la lista enlazada
    public:
        string nombre;
        int telefono;
        Node* next;  // Puntero hacia el siguiente nodo de la lista enlazada
};

enum opciones{
    // Opciones disponibles para el menu
    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_CLOUD,
    MOSTRAR_CONTACTOS,
    SALIR,
    OPCIONES_MAX
};



int main(){

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
                break;
            case ELIMINAR_CONTACTO:
                // Funcion de eliminar contacto
                break;
            case IMPRIMIR_CLOUD:
                // Funcion de imprimir hash table y listas enlazadas
                break;
            case MOSTRAR_CONTACTOS:
                // Funcion de mostrar contactos
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