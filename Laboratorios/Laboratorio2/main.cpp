#include <iostream>
#include "EmpleadoAsalariado.hpp"
#include "EmpleadoPorHoras.hpp"

int main(){
    // Crear objeto de la clase EmpleadoAsalariado que deriva de Empleado
    EmpleadoAsalariado emp1("Marito", 30, 2000);
    // Crear objeto de la clase EmpleadoPorHoras que deriva de Empleado
    EmpleadoPorHoras emp2("Juana", 25, 10, 40);

    std::cout << "Detalles del empleado asalariado: " << std:: endl;
    emp1.mostrarDetalles();  // Metodo de la clase Empleado
    std::cout << "Pago: $" << emp1.calcularPago() << std::endl;  // Metodo de la clase EmpleadoAsalariado

    std::cout << "\nDetalles del empleado por horas: " << std::endl;
    emp2.mostrarDetalles();  // Metodo de la clase Empleado
    std::cout << "Pago: $" << emp2.calcularPago() << std::endl;   // Metodo de la clase EmpleadoPorHoras

    return 0;
}