#include <iostream>
#include "biblioteca.hpp"

int main(){
    Biblioteca biblioteca;  // Crear objeto tipo biblioteca

    // Agregar 2 libros
    biblioteca.agregarLibro("El gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1983", "George Orwell");
    
    biblioteca.mostrarCatalogo();        // Mostrar info de todos los libros

    return 0;
}