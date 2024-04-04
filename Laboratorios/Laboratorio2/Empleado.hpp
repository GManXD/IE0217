#ifndef EMPLEADO_HPP   // Definir si no lo está
#define EMPLEADO_HPP

#include <string>

class Empleado{
    // Tipo de acceso protected
    protected:
        std::string nombre;
        int edad;
        double salario;
    // Tipo de acceso public
    public:
        // Constructor de clase
        Empleado(std::string _nombre, int _edad, double _salario);
        virtual ~Empleado(){}   // Destructor de clase
        virtual double calcularPago() const = 0;  // Método virtual puro
        virtual void mostrarDetalles() const;     // Metodo virtual no puro
};


#endif  // EMPLEADO_HPP