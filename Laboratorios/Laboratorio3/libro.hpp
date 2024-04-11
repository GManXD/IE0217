#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>
#include <iostream>
using namespace std;

struct Libro{
    // Alberga la informacion de un libro y la direccion del que sigue
    string titulo;
    string autor;
    string genero;
    // Puntero al libro que sigue
    Libro* siguiente;

};

enum opciones{
    // Opciones disponibles para el menu
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS = 2,
    SALIR = 3,
    OPCIONES_MAX
};

void agregarLibro(Libro*& lista);
// Pregunta la informacion de un libro y lo agrega

void mostrarLibros(Libro* lista);
// Muestra la informacion de todos los libros

void liberarMemoria(Libro* &lista);
// Libera memoria dinamica

#endif //LIBRO_HPP