#ifndef GESTOR_HPP
#define GESTOR_HPP


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
    public:
        string nombre;
        int telefono;
        Node* next;
    Node(string nombre, int telefono);

};

class HashTable{
    private:
        int tamano;
        vector<Node*> tabla;
    
    public:
        // Constructor de la clase, inicializa la tabla con nullptr
        HashTable(int tamano);  
        int Hashing(string key);  // Algoritmo de hashing
        void insertarContacto(string nombre, int numero);   // Agrega un nuevo contacto a la nube
        void EliminarContacto(string nombre);   // Elimina un contacto de la nube
        void mostrar(); // Imprimir Hash-Table y Listas Enlazadas
        ~HashTable();  // Destructor que se encarga de liberar memoria
};


class Contactos{
    private:
        Node* header;
    
    public:
        Contactos();  // Constructor que inicializa header en nullptr
        void insertarContacto(string nombre, int telefono); // Agrega un contacto en la memoria del celular
        int eliminarContacto(string nombre);    // Elimina un contacto de la lista
        void sort();    // Ordenar de forma alfabetica
        void mostrar();     // Muestra los contactos de la memoria del celular
        ~Contactos();  // Destructor que libera la memoria
};


void agregarContacto(Contactos& contactos, HashTable& tableHash); // Pasar parametros por referencia
    // Agrega un contacto en la memoria del celular y el cloud


void EliminarContacto(Contactos &contactos, HashTable &tablaHash);
    // Elimina un contacto de la memoria del celular y pregunta si del cloud tambien
    
#endif // GESTOR_HPP