#include "validador.hpp"

void ValidadorEmail::solicitarCorreo() {
    // Solicita el correo electronico
    std::cout << "Ingrese su correo electronico: " << std::endl;
    std::cin >> this->correo;
}

bool ValidadorEmail::validarCorreo(const std::string& correo) {
    // Valida el correo electronico

    // Verificar que el correo contiene un '@'
    if (correo.find('@') == std::string::npos) {
        throw std::invalid_argument("El correo electronico debe contener '@'");
    }

    // Regular expression
    std::string const emailRegex = "^[a-zA-Z0-9][a-zA-Z0-9-_]{1,14}(?:\\.[a-zA-Z0-9-_]+)*@(?:[a-zA-Z](?:[a-zA-Z]{1,28}[a-zA-Z])?\\.)+[a-zA-Z](?:[a-zA-Z]*[a-zA-Z])?$";
    std::regex patronRegex(emailRegex);


    // Verificar si el nombre no cumple con las reglas
    if (correo.find('@') > 15 || correo.find('@') == 0) {
        throw std::invalid_argument("El nombre de usuario debe tener entre 1 y 15 caracteres. ");
    }
    // Verificar si el dominio no cumple con las reglas
    size_t posArroba = correo.find('@');
    std::string dominio = correo.substr(posArroba + 1);
    if (dominio.length() > 30 || dominio.length() < 3) {
        throw std::invalid_argument("El dominio debe tener entre 3 y 30 caracteres. ");
    }

    // Verificar si la extensión no cumple con las reglas
    size_t posUltimoPunto = dominio.find_last_of('.');
    std::string extension = dominio.substr(posUltimoPunto + 1);
    if (extension.length() < 2 || extension.length() > 6) { // Caso que no respete la longitud
        throw std::invalid_argument("La extension debe tener entre 2 y 6 letras.");
    }
    if (!std::regex_match(extension, std::regex("^[a-zA-Z]+$"))) { // Caso de que tenga caracteres especiales o numeros
        throw std::invalid_argument("La extension no puede contener numeros ni caracteres especiales.");
    }

    if (correo.find("..") != std::string::npos || correo.find("--") != std::string::npos || correo.find("__") != std::string::npos) {
        throw std::invalid_argument("No puede contener dos caracteres especiales consecutivos. ");
    }

    // Retornar true si el correo es valido, sino false
    return std::regex_match(correo, patronRegex); 
}