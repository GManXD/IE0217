#ifndef VALIDADOR_HPP
#define VALIDADOR_HPP

#include <iostream>
#include <regex>
#include <stdexcept>

class ValidadorEmail {
    // Clase para la validacion del email
public:
    std::string correo;

    void solicitarCorreo();     // Solicita el correo
    bool validarCorreo(const std::string& correo);      // Valida el correo
};

#endif // VALIDADOR_HPP
