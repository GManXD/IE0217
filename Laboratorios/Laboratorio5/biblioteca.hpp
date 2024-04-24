#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <string>
#include <vector>

class Libro {
public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t, std::string a, int anio);
    
    bool operator<(const Libro& l) const;
};

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void mostrarLibros();
    void ordenarLibrosPorAnio();
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);
    std::vector<Libro>::iterator end();
};

#endif // BIBLIOTECA_HPP
