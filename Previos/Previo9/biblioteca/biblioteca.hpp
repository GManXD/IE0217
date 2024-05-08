#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

class Biblioteca { 
    public:
        void agregarLibro(  // Agrega un libro
            const std::string& titulo,
            const std::string& autor
        );
        void mostrarCatalogo();    // Muestra el catalogo

    private:
        std::vector<Libro> catalogo;  // Catalogo de libros
};


#endif  // BIBLIOTECA_HPP
