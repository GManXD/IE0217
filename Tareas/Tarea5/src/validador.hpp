/**
 * @file validador.hpp
 * @version 1.0
 * @date 16/05/2024
 * @author Oscar Rojas Rojas
 * @title Encabezados
 * @brief Declaracion de clases y metodos
*/

#ifndef VALIDADOR_HPP
#define VALIDADOR_HPP

#include <iostream>
#include <regex>
#include <stdexcept>

/**
 * @brief Clase para validar correos electrónicos.
 */
class ValidadorEmail {
    // Clase para validar emails
public:
    std::string correo;

    /**
     * @brief Solicita al usuario que ingrese un correo electrónico.
     */
    void solicitarCorreo(); // Solicita el correo al usuario

    /**
     * @brief Valida un correo electrónico según una serie de reglas.
     * @param correo El correo electrónico a validar.
     * @return true si el correo es válido, false en caso contrario.
     * @throws std::invalid_argument si el correo no cumple con las reglas de validación.
     */
    bool validarCorreo(const std::string& correo);  // Valida el correo ingresado
    
};

#endif // VALIDADOR_HPP

