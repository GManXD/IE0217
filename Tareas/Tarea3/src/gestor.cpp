#include "gestor.hpp"
using namespace std;

// Constructor de clase Node, 
Node::Node(string nombre, int telefono) : nombre(nombre), telefono(telefono), next(nullptr) {}

// Constructor de la clase, inicializa la tabla con nullptr
HashTable::HashTable(int tamano) : tamano(tamano), tabla(tamano, nullptr) {}

int HashTable::Hashing(string key) {
    // Algoritmo de hashing
    int suma = 0;
    for (char c : key) {
        suma += c;
    }
    return suma % tamano;
}

void HashTable::insertarContacto(string nombre, int numero) {
    // Agrega un nuevo contacto a la nube
    int indice = Hashing(nombre);
    Node* celdaPtr = tabla[indice];     // Nodo puntero que apunta al primer nodo de la lista
    while (celdaPtr != nullptr) {
        if (celdaPtr->nombre == nombre) {   // Caso de que el contacto ya exista
            cout << "El contacto ya existia" << endl;
            return;     // No iterar más 
        }
        celdaPtr = celdaPtr->next;  // Seguir recorriendo
    }
    Node* nuevoNodo = new Node(nombre, numero);     // Reservar memoria dinámica
    if (tabla[indice] == nullptr) { // Caso que no exista el primer nodo de la lista
        tabla[indice] = nuevoNodo;  // El nuevo contacto se convierte en el primer nodo de la lista
    }
    else {      // Caso de que ya existia el primer nodo
        nuevoNodo->next = celdaPtr;     // El nuevo nodo apunta al nodo al que apuntaba la hash table en el indice correspondiente
        celdaPtr->next = nuevoNodo;     // El nodo al cual apunta la hash table en ese indice ahora corresponde a el nuevo Nodo
    }
}

void HashTable::EliminarContacto(string nombre) {
    // Elimina un contacto de la nube 
    int indice = Hashing(nombre);
    Node* celdaPtr = tabla[indice];     // Nodo puntero que apunta al primer nodo de la lista

    if (celdaPtr != nullptr and celdaPtr->nombre == nombre) {       // Caso que el primer nodo sea el nodo a eliminar
        tabla[indice] = celdaPtr->next;
        delete celdaPtr;        // Liberar memoria
        cout << "Contacto eliminado: " << nombre << endl;
        return;
    }

    // Si el nodo a eliminar no es el primero:
    Node* anterior = nullptr;    // Puntero al elemento anterior
    while (celdaPtr != nullptr) {
        if (celdaPtr->nombre == nombre) {
            anterior->next = celdaPtr->next;    // Enlazar el nodo anterior al nodo siguiente al nodo actual
            delete celdaPtr;        // Liberar la memoria del nodo actual
            cout << "Contacto eliminado de cloud: " << nombre << endl;
            return;         // Salir de la función después de eliminar el contacto
        }
        // Seguir iterando si no se encuentra coincidencia del nombre
        anterior = celdaPtr;
        celdaPtr = celdaPtr->next;
    }
}

void HashTable::mostrar() {
    // Muestra los contactos de la nube

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

HashTable::~HashTable() {   // Destructor que se encarga de liberar memoria
    for (int i = 0; i < tamano; ++i) {
        Node* posicionActual = tabla[i];
        while (posicionActual != nullptr) {
            Node* temp = posicionActual;    // Variable temporal para hacer la liberacion
            posicionActual = posicionActual->next;
            delete temp;    // Liberar
        }
    }
}

Contactos::Contactos() : header(nullptr) {}

void Contactos::insertarContacto(string nombre, int telefono) {
    // Agrega un contacto usando la memoria del celular
    Node* contactoActual = header;
    while (contactoActual != nullptr) {
        if (contactoActual->nombre == nombre) {     // Caso nombre ya existia
            cout << "El contacto ya existe " << endl;
            return;
        }
        contactoActual = contactoActual->next;
    }
    // Reservar memoria dinámica
    Node* nuevoContacto = new Node(nombre, telefono);
    nuevoContacto->next = header;
    header = nuevoContacto;
}

int Contactos::eliminarContacto(string nombre) {  // Retorna 0 Si no eliminó nada
    // Elimina un contacto de la lista

    // Verificar si la lista está vacía
    if (header == nullptr) {
        cout << "La lista de contactos esta vacia." << endl;
        return 0;
    }
    Node* temp = header;
    Node* prev = nullptr;

    if (temp != nullptr && temp->nombre == nombre) {    // Caso de que el contacto a eliminar sea el primer nodo
        header = temp->next;
        delete temp;
        cout << "Se ha eliminado " << nombre << endl;
        return 1;
    }

    while (temp != nullptr && temp->nombre != nombre) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {  // Caso de que no se encontro el contacto
        cout << "El contacto no se encuentra registrado " << endl;
        return 0;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Se ha eliminado " << nombre << endl;
}

void Contactos::sort() {    // Ordenar de forma alfabetica
    bool intercambiado;
    Node* contactoActual;
    Node* siguiente = nullptr;

    if (header == nullptr || header->next == nullptr) {
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

void Contactos::mostrar() {
    // Muestra los contactos almacenados en la memoria del celular

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

Contactos::~Contactos() {   // Destructor que libera la memoria
    while (header != nullptr) {
        Node* temp = header;
        header = header->next;
        delete temp;
    }
}

void agregarContacto(Contactos& contactos, HashTable& tableHash) {
    // Agrega un contacto en la memoria del celular y el cloud
    std::string nombre;
    int telefono;

    cout << "Indique el nombre del contacto que desea agregar" << std::endl;
    cin.ignore();
    getline(cin, nombre);

    cout << "Indique el numero de telefono del contacto que desea agregar" << std::endl;
    cin >> telefono;

    contactos.insertarContacto(nombre, telefono);
    tableHash.insertarContacto(nombre, telefono);
}


void EliminarContacto(Contactos& contactos, HashTable& tablaHash) {
    // Elimina un contacto de la memoria del celular y pregunta si del cloud tambien
    std::string nombre;
    int desicion;
    cout << "Indique el nombre del contacto a eliminar" << std::endl;
    cin.ignore();  // Vaciar el buffer
    getline(cin, nombre);
    contactos.eliminarContacto(nombre);
    cout << "Desea eliminar el contacto del cloud tambien?, digite 1 para si cualquier numero para no: " << std::endl;
    cin >> desicion;

    if (desicion == 1) {
        tablaHash.EliminarContacto(nombre);
    }
}