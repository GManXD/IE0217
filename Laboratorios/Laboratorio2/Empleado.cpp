#include "Empleado.hpp"
#include <iostream>

// Constructor de clase
Empleado::Empleado(std::string _nombre, int _edad, double _salario) :
    nombre(_nombre), edad(_edad), salario(_salario) {}  // Se asignan valores


void Empleado::mostrarDetalles() const {
    // Muestra los datos del empleado
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Salario: " << salario << std::endl;
}