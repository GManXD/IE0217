#include <iostream>
#include "libro.hpp"

// Constructor de la clase Libro
Libro::Libro(
    const std::string& titulo, const std::string& autor)
    : titulo(titulo), autor(autor) {}


// Metodo que muestra la informacion
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo
    << ", Autor: " << autor << std::endl;
}