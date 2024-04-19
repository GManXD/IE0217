#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstring>
#include <list>
#include <utility>

using namespace std;


enum opciones{
    // Opciones disponibles para el menu
    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_CLOUD,
    MOSTRAR_CONTACTOS,
    SALIR,
    OPCIONES_MAX
};

class Node{
    // Nodos para la lista enlazada
    public:
        string nombre;
        int telefono;
        Node* next;  // Puntero hacia el siguiente nodo de la lista enlazada
    Node(string nombre, int telefono){
        this->nombre = nombre;
        this->telefono = telefono;
        this->next = nullptr;
    }
};


class HashTable{
    // Estructura que almacena una lista enlazada por cada contacto, de forma que la llave corresponde al nombre del contacto
    // Cada valor corresponde a una lista enlazada que contiene una copia de los contactos correspondientes
    private:
        int tamano;     // Constante del tamaño del Hash-Table
        vector<Node*> tabla;    // Vector que contiene punteros a nodos, este corresponde a los values de la Hash table
    
    public:
        // Constructor de la clase, inicializa la tabla con nullptr
        HashTable(int tamano): tamano(tamano), tabla(tamano,nullptr) {}

        int Hashing(string key){
            // Algoritmo de hashing
            int suma = 0;
            for (char c : key){
                suma += c;  // Suma el valor ASCII de todas las letras del nombre
            }
            return suma % tamano;   // Retorna un indice
        }
        
        void insertarContacto(string nombre, int numero){
            // Agrega un nuevo contacto a la nube
            int indice = Hashing(nombre);
            Node* celdaPtr= tabla[indice];  // Nodo puntero que apunta al primer nodo de la lista
            while (celdaPtr != nullptr){
                if (celdaPtr->nombre == nombre){  // Caso de que el contacto ya exista
                    cout << "El contacto ya existia" << endl;
                    break;  // No iterar más 
                }
                celdaPtr = celdaPtr->next;  // Seguir recorriendo
            }
            Node* nuevoNodo = new Node(nombre, numero);
            if (tabla[indice] == nullptr){  // Caso que no exista el primer nodo de la lista
                tabla[indice] = nuevoNodo;  // El nuevo contacto se convierte en el primer nodo de la lista
            }
            else{   // Caso de que ya existia el primer nodo
                    nuevoNodo->next = celdaPtr;     // El nuevo nodo apunta al nodo al que apuntaba la hash table en el indice correspondiente
                    celdaPtr->next = nuevoNodo;     // El nodo al cual apunta la hash table en ese indice ahora corresponde a el nuevo Nodo
            }
        }


};


int main(){
    HashTable tablaHash = HashTable(10);   // Se debe especificar el tamaño de la tabla
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