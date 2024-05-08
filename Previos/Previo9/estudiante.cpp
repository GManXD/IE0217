#include <iostream>
#include "estudiante.hpp"

// Constructor de la clase Estudiante
Estudiante::Estudiante(
    const std::string& nombre, int edad)
    : nombre(nombre), edad(edad) {}


// Metodo que muestra el nombre y la edad
void Estudiante::mostrarDatos(){
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}