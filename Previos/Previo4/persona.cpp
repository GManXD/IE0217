// Archivo donde se definen los metodos y constructor de clase para el arhivo main.cpp
#include "persona.hpp"
using namespace std;

Persona::Persona(string nombre, int edad){  // Definiendo el constructor
    // Asignar valores
    this->nombre = nombre;
    this->edad = edad;
}

string Persona::getNombre(){  // Definiendo el metodo getNombre()
    // Retorna el nombre
    return nombre;
}

int Persona::getEdad(){  // Definiendo el metodo getEdad()
    // Retorna la edad
    return edad;
}

void Persona::setEdad(int edad){  // Definiendo el metodo setEdado()
    // Establece la edad
    this->edad = edad;
}