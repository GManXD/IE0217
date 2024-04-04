#include "EmpleadoAsalariado.hpp"

// Constructor de clase
EmpleadoAsalariado :: EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado(_nombre, _edad, _salario) {}  // Se asignan los valores

// Se implementa el metodo virtual puro: calcularPago()
double EmpleadoAsalariado :: calcularPago() const{
    // returna el pago al empleado
    return salario;
}

// No es necesario implementar el otro metodo virtual, pues ya se habia declarado en "Empleado.cpp"