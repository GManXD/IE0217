#include "biblioteca.hpp"

int main() {
    // Crear objeto tipo Biblioteca que contiene a los libros y algoritmos de busqueda y ordenamiento
    Biblioteca miBiblioteca;
    
    // Agregar libros
    miBiblioteca.agregarLibro({"Cien anos de soledad", "Gabriel Garcia Marquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El senor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"The Hunger Games", " Suzanne Collins", 2008});

    // Ordenar y mostrar libros
    std::cout << "Ordenados despues de agregarlos: " << std::endl;
    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();
    std::cout << std::endl;

    // Agregar un libro mas
    std::cout << "Sin ordenar despues de agregar uno nuevo: " << std::endl;
    miBiblioteca.agregarLibro({"Harry Potter y la piedra filosofal", "J.K. Rowling", 1997});
    miBiblioteca.mostrarLibros();       // Se muestra sin haber ordenado este ultimo libro agregado
    std::cout << std::endl;

    // Ordenar y mostrar de nuevo
    std:: cout << "Ordenado despues de agregar el nuevo: " << std::endl;
    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();
    std::cout << std::endl;

    // Buscar un libro en especifico
    std::string titulo1 = "1984";
    auto libro1 = miBiblioteca.buscarLibroPorTitulo(titulo1);
    if (libro1 != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro1->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    // Buscar otro libro en especifico (este no se encuentra en la lista)
    std::string titulo2 = "El codigo de da Vinci";
    auto libro2 = miBiblioteca.buscarLibroPorTitulo(titulo2);
    if (libro2 != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro2->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado: " << titulo2 << std::endl;
    }

    return 0;
}
