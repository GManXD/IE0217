// Archivo encabezado para main.cpp
#ifndef PERSONA_H  // Si no está definido lo define
#define PERSONA_H

#include <string>

using namespace std;

class Persona{
    // "Prototipo" de clase Persona
    private:
        string nombre;
        int edad;
    
    public:
        Persona(string nombre, int edad);  // Constructor
        string getNombre();     // Funcion que retorna el nombre
        int getEdad();          // Funcion que retorna la edad
        void setEdad(int edad);  // Establece la edad

};

#endif // PERSONA_H