#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Libro {
public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    
    Libro(std::string t, std::string a, int anio);  // Constructor de clase
    
    bool operator<(const Libro& l) const;   // Retorna si es el año de publicacion de un libro es menor que otro
};

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);  // Agrega un libro al vector de libros
    void mostrarLibros();               // Muestra los libros que hay, su autor y fecha de publicacion
    void ordenarLibrosPorAnio();    // Utiliza el algoritmo de ordenamiento para ordenar los libros por fecha de publicacion
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);  // Retorna un iterador que apunta hacia el libro que se busca
    std::vector<Libro>::iterator end();     // Funcion que retorna un iterador al final del vector de libros
};

#endif // BIBLIOTECA_HPP
