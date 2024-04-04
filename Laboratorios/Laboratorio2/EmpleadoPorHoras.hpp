#ifndef EMPLEADOPORHORAS_HPP    // Definir si no lo está
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado{ // Herencia publica
    private:  // Acceso privado
        int horasTrabajadas;

    public: // Acceso publico
        // Constructor de clase
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        // Metodo virtual puro de la clase madre 
        double calcularPago() const override;   // Se sobreescribe
};


#endif // EMPLEADOPORHORAS_HPP