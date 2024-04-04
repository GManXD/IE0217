#include "EmpleadoPorHoras.hpp"

// Constructor de clase
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}  // Se asignan  valores


// Se implementa el metodo virtual puro: calcularPago()
double EmpleadoPorHoras:: calcularPago() const {
    // returna el pago al empleado
    return salario * horasTrabajadas;
}

// No es necesario implementar el otro metodo virtual, pues ya se habia declarado en "Empleado.cpp"