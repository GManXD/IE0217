#include <iostream>
#include "contacto.hpp"  // Encabezados
#include "Funciones.hpp"   // Definiciones de funcion
// Se hace un define para facilitar la legibilidad del codigo
// Se hace en tiempo de pre compilación
#define MAX_CONTACTOS 100  // Cantidad maxima de contactos

// Enumerador Opciones
enum Opciones {
    AGREGAR = 1,  // Se inicializa en 1
    MOSTRAR,  // Los demás por defecto tienen valor del anterior + 1
    BUSCAR,
    SALIR
};

int main() {
    // Crear elemento tipo contacto
    Contacto listaContactos[MAX_CONTACTOS];  // De momento solo tiene elementos basura

    int numContactos = 0; // Se inicializa variable (inicia en el contacto numero 0)
    int opcion;  // Se declara variable

    do {
        std::cout << "\nMenu: \n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contactos\n";
        std::cout << "3. Buscar Contacto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;  // Se guarda la opcion

        // Casos dependiendo de la opcion que elija el usuario
        switch(opcion){
            case AGREGAR:
                // Se agrega contacto nuevo
                agregarContacto(listaContactos, numContactos);
                break;
            case MOSTRAR:
                // Se muestra la lista de contactos existentes
                mostrarContactos(listaContactos, numContactos);
                break;
            case BUSCAR:
                // Se busca un contacto en especifico
                buscarContacto(listaContactos, numContactos);
                break;
            case SALIR:
                // Se sale del programa
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                // Caso default, no se elige una opcion valida
                std::cout << "\nOpcion no valida. Intente de nuevo..\n";
                break;
        }
    } while (opcion != SALIR);  // Condicion de mientras no se digite la opcion salir, se siga ejecutando el programa


    return 0;
}