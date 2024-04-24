#include "biblioteca.hpp"
// Constructor de clase de la clase Libro
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

bool Libro::operator<(const Libro& l) const {
    // Retorna si es el año de publicacion de un libro es menor que otro
    return anioPublicacion < l.anioPublicacion;
}

void Biblioteca::agregarLibro(const Libro& libro) {
    // Agrega un libro al vector de libros
    libros.push_back(libro);
}

void Biblioteca::mostrarLibros() {
    // Muestra los libros que hay, su autor y fecha de publicacion
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}

void Biblioteca::ordenarLibrosPorAnio() {
    // Utiliza el algoritmo de ordenamiento para ordenar los libros por fecha de publicacion
    std::sort(libros.begin(), libros.end());
}

std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    // Retorna un iterador que apunta hacia el libro que se busca
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}

std::vector<Libro>::iterator Biblioteca::end() {
    // Funcion que retorna un iterador al final del vector de libros
    return libros.end();
}

