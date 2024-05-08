#include <iostream>
#include "biblioteca.hpp"

// Constructor de la clase Estudiante
void Biblioteca::agregarLibro(
    // Agrega un libro al catalogo
    const std::string& titulo, 
    const std::string& autor
) {
        catalogo.emplace_back(titulo, autor);
}


// Metodo que muestra el nombre y la edad
void Biblioteca::mostrarCatalogo(){
    for (const auto& libro: catalogo){
        // Mostrar info de cada libro en el catalogo
        libro.mostrarInfo();
    }
}