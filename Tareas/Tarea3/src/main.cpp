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

        void EliminarContacto(string nombre){
            int indice = Hashing(nombre);
            Node* celdaPtr= tabla[indice];  // Nodo puntero que apunta al primer nodo de la lista

            if (celdaPtr != nullptr and celdaPtr->nombre == nombre){  // Caso que el primer nodo sea el nodo a eliminar
                tabla[indice] = celdaPtr->next;
                delete celdaPtr;
                cout << "Contacto eliminado: " << nombre << endl;
                return;
            }
            
            // Si el nodo a eliminar no es el primero:
            Node* anterior = nullptr;  // Puntero al elemento anterior
            while (celdaPtr != nullptr){
                if(celdaPtr->nombre == nombre){
                    anterior->next = celdaPtr->next;  // Enlazar el nodo anterior al nodo siguiente al nodo actual
                    delete celdaPtr;  // Liberar la memoria del nodo actual
                    cout << "Contacto eliminado de cloud: " << nombre << endl;
                    return;  // Salir de la función después de eliminar el contacto
                }
                // Seguir iterando si no se encuentra coincidencia del nombre
                anterior = celdaPtr;
                celdaPtr = celdaPtr->next;
            }

        }

        void mostrar(){
            // Imprimir Hash-Table y Listas Enlazadas
            for (int i = 0; i < tamano; ++i) {
                cout << "Posicion: " << i << " de la tabla hash" << endl;
                Node* actual = tabla[i];
                while (actual != nullptr) {
                    cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << endl;
                    actual = actual->next;
                }
                cout << endl;
            }
        }

        ~HashTable() {  // Destructor que se encarga de liberar memoria
            for (int i = 0; i < tamano; ++i) {
                Node* posicionActual = tabla[i];
                while (posicionActual != nullptr) {
                    Node* temp = posicionActual;
                    posicionActual = posicionActual->next;
                    delete temp; // Liberar la memoria del nodo actual
                }
            }
        }
};

class Contactos{
    private:
        Node* header;
    
    public:
        Contactos() : header(nullptr) {}  // Constructor que inicializa header en nullptr
    
        void insertarContacto(string nombre, int telefono){
            Node* contactoActual = header;
            while (contactoActual != nullptr){
                if (contactoActual->nombre == nombre){  // Caso nombre ya existia
                    cout << "El contacto ya existe " << endl;
                    return;  // Salir
                }
                contactoActual = contactoActual->next;
            }


            Node* nuevoContacto = new Node(nombre, telefono);
            nuevoContacto->next = header;
            header = nuevoContacto;
        }
        
        int eliminarContacto(string nombre){
            // Elimina un contacto de la lista

            // Verificar si la lista está vacía
            if (header == nullptr) {
                cout << "La lista de contactos esta vacia." << endl;
                return 0;
            }
            Node* temp = header;
            Node* prev = nullptr;

            if(temp != nullptr && temp->nombre == nombre){ // Caso de que el contacto a eliminar sea el primer nodo
                header = temp->next;
                delete temp;
                cout << "Se ha eliminado " << nombre << endl;
                return 1;
            }

            while(temp != nullptr && temp->nombre != nombre){
                prev = temp;
                temp = temp->next;
            }
            
            if (temp == nullptr){  // Caso de que no se encontro el contacto
                cout << "El contacto no se encuentra registrado " << endl;
                return 0;
            }

            prev->next = temp->next;
            delete temp;
            cout << "Se ha eliminado " << nombre << endl;
        }

        void sort(){
            // Ordenar de forma alfabetica
            bool intercambiado;
            Node* contactoActual;
            Node* siguiente = nullptr;

            if (header == nullptr || header->next == nullptr){
                return; // Ya se encuentra ordenado pues tiene 0 o 1 elemento
            }
            do {
                intercambiado = false;
                contactoActual = header;

                while (contactoActual->next != siguiente) {
                    if (contactoActual->nombre > contactoActual->next->nombre) {
                        // Intercambiar los nodos si están en el orden incorrecto
                        string tempNombre = contactoActual->nombre;
                        int tempTelefono = contactoActual->telefono;
                        contactoActual->nombre = contactoActual->next->nombre;
                        contactoActual->telefono = contactoActual->next->telefono;
                        contactoActual->next->nombre = tempNombre;
                        contactoActual->next->telefono = tempTelefono;
                        intercambiado = true;
                    }
                    contactoActual = contactoActual->next;
                }
                siguiente = contactoActual;
            } while (intercambiado);
        }

        void mostrar() {
            // Verificar si la lista está vacía
            if (header == nullptr) {
                cout << "La lista de contactos esta vacia." << endl;
                return;
            }
            sort(); // Ordenar la lista
            // Recorrer la lista e imprimir cada contacto
            Node* actual = header;
            while (actual != nullptr) {
                cout << "Nombre: " << actual->nombre << ", Telefono: " << actual->telefono << endl;
                actual = actual->next;
            }
        }

        ~Contactos(){   // Destructor que libera la memoria
            while (header != nullptr) {
            Node* temp = header;
            header = header->next;
            delete temp;
            }
        }
};

void agregarContacto(Contactos& contactos, HashTable& tableHash){  // Pasar parametros por referencia
    // Agrega un contacto en la memoria del celular y el cloud
    string nombre;
    int telefono;

    cout << "Indique el nombre del contacto que desea agregar" << endl;
    cin.ignore();   // Vaciar buffer
    getline(cin, nombre);

    cout << "Indique el numero de telefono del contacto que desea agregar" << endl;
    cin >> telefono;
    
    contactos.insertarContacto(nombre, telefono);
    tableHash.insertarContacto(nombre,telefono);
}

void EliminarContacto(Contactos &contactos, HashTable &tablaHash){
    // Elimina un contacto de la memoria del celular y pregunta si del cloud tambien
    string nombre;
    int desicion;
    cout << "Indique el nombre del contacto a eliminar" << endl;
    cin.ignore(); // Vaciar buffer
    getline(cin, nombre);
    int seElimino = contactos.eliminarContacto(nombre);
    if (seElimino){
        cout << "Desea eliminar el contacto del cloud tambien?, digite 1 para si o 0 para no: " << endl;
        cin >> desicion;

        if (desicion == 1){
            tablaHash.EliminarContacto(nombre);
        }
    }
}

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