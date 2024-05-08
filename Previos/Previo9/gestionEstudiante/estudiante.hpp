#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

class Estudiante {  
    public:
        // Constructor
        Estudiante(const std::string& nombre, int edad);
        void mostrarDatos();    // Muestra nombre y edad

    private:
        std::string nombre;
        int edad;
};


#endif  // ESTUDIANTE_HPP
