#ifndef EMPLEADOASALARIADO_HPP  // Definir si no lo está
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

class EmpleadoAsalariado : public Empleado {  // Herencia publica

    public:  // Acceso publico
        // Constructor de clase
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        // Se declara otro metodo calcularPago() debido a que era un metodo virtual
        double calcularPago() const override;  // Se sobreescribe
};

#endif // EMPLEADOASALARIADO_HPP