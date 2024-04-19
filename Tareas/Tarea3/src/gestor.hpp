/**
 * @file gestor.hpp
 * @version 1.0
 * @date 19/04/2024
 * @author Oscar Rojas Rojas
 * @title Encabezados
 * @brief Declaracion de clases y funciones
*/


#ifndef GESTOR_HPP
#define GESTOR_HPP


#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstring>
#include <list>
#include <utility>

using namespace std;


/**
 * @brief Contiene las unicas opciones posibles para el menu
 * 
*/
enum opciones{
    // Opciones disponibles para el menu
    AGREGAR_CONTACTO = 1,
    ELIMINAR_CONTACTO,
    IMPRIMIR_CLOUD,
    MOSTRAR_CONTACTOS,
    SALIR,
    OPCIONES_MAX
};

/**
 * @brief Clase Node para la estructura de datos "lista enlazada"
 * 
*/
class Node{
    public:
        string nombre;
        int telefono;
        Node* next;
    /**
    * @brief Constructor de clase que indica el nombre y numero de telefono de un contacto
    * @param nombre nombre del contacto
    * @param telefono numero de telefono del contacto
    */
    Node(string nombre, int telefono);

};


/**
 * @brief Clase HashTable para la estructura de datos "Hash table"
 * 
*/
class HashTable{
    // Estructura que almacena una lista enlazada por cada contacto, de forma que la llave corresponde al nombre del contacto
    // Cada valor corresponde a una lista enlazada que contiene una copia de los contactos correspondientes
    private:
        int tamano;     // Tamaño del hashTable
        vector<Node*> tabla;       // Vector que contiene punteros a nodos, este corresponde a los values de la Hash table
    
    public:
        // Constructor de la clase, inicializa la tabla con nullptr
        /**
         * @brief Constructor de clase que indica el tamaño de la estructura
         * @param tamano tamaño de la estructura
        */
        HashTable(int tamano);  
        /**
         * @brief Algoritmo hashing para indexar un par llave-valor, retorna el indice
         * @param nombre nombre del contacto, el cual se utilizara como llave para acceder a este 
        */
        int Hashing(string nombre);  // Algoritmo de hashing
        /**
         * @brief Añade un contacto en la memoria cloud
         * @param nombre nombre del contacto
         * @param numero numero de telefono del contacto
        */
        void insertarContacto(string nombre, int numero);   // Agrega un nuevo contacto a la nube
        /**
         * @brief Elimina un contacto de la nube
         * @param nombre nombre del contacto
        */
        void EliminarContacto(string nombre);   // Elimina un contacto de la nube
        /**
         * @brief Imprime la Hash-Table y Listas Enlazadas
         * 
        */
        void mostrar(); // Imprimir Hash-Table y Listas Enlazadas
        /**
         * @brief Destructor de clase que libera memoria
         * 
        */
        ~HashTable();  // Destructor que se encarga de liberar memoria
};

/**
 * @brief Clase contactos que utiliza memoria del celular
 * 
*/
class Contactos{
    private:
        Node* header;
    
    public:
        /**
         * @brief Constructor de clase que inicializa header en nullptr
         * 
        */
        Contactos();  // Constructor que inicializa header en nullptr
        /**
         * @brief Añade un contacto a la memoria del celular
         * @param nombre nombre del contacto
         * @param telefono numero de telefono del contacto
         * 
        */
        void insertarContacto(string nombre, int telefono); // Agrega un contacto en la memoria del celular
        /**
         * @brief Elimina un contacto de la memoria del celular
         * @param nombre nombre del contacto
         * 
        */
        int eliminarContacto(string nombre);    // Elimina un contacto de la lista
        /**
         * @brief Ordena de forma alfabetica una lista
        */
        void sort();    // Ordenar de forma alfabetica
        /**
         * @brief Muestra los contactos de la memoria del celular
        */
        void mostrar();     // Muestra los contactos de la memoria del celular
        /**
         * @brief Destructor que libera memoria
        */
        ~Contactos();  // Destructor que libera la memoria
};

/**
* @brief Agrega un contacto en la memoria del celular y el cloud
* @param contactos objeto de tipo contactos
* @param tableHash objeto de tipo HashTable 
*/
void agregarContacto(Contactos& contactos, HashTable& tableHash); // Pasar parametros por referencia
    // Agrega un contacto en la memoria del celular y el cloud

/**
* @brief Elimina un contacto de la memoria del celular y pregunta si del cloud tambien
* @param contactos objeto de tipo contactos
* @param tableHash objeto de tipo HashTable 
*/
void EliminarContacto(Contactos &contactos, HashTable &tablaHash);
    // Elimina un contacto de la memoria del celular y pregunta si del cloud tambien
    
#endif // GESTOR_HPP