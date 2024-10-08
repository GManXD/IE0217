#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

class Libro {  // Constructor
    public:
        Libro(const std::string& titulo, const std::string& autor);
        void mostrarInfo() const;    // Muestra la informacion

    private:
        std::string titulo;
        std::string autor;
};


#endif  // LIBRO_HPP
