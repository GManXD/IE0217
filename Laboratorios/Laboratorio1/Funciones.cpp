#include "Funciones.hpp" // Encabezado

void agregarContacto(Contacto listaContactos[], int &numContactos){
    // La funcion agrega un contacto nuevo modificando la listaContacto[] y numContactos
    Contacto nuevoContacto;  // Nuevo contacto tipo contacto

    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;
    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> nuevoContacto.telefono;
    // Nota: numContactos se pasó por referencia, por lo que se modificará
    listaContactos[numContactos++] = nuevoContacto;  // Se agrega el nuevo contacto a la lista
}

void mostrarContactos(const Contacto listaContactos[], int numContactos){
    // La funcion muestra la lista de contactos registrada hasta el momento
    std::cout << "Lista de contactos:\n";
    // Iterar sobre la lista de contactos para imprimir toda la lista de contactos
    for (int i=0; i < numContactos; ++i){
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";

    }
}


void buscarContacto(const Contacto listaContactos[], int numContactos){
    // se declara nombreBusqueda, es el nombre del contacto a buscar
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;
    // Se crea una variable para verificar si ha sido encontrado el contacto
    bool encontrado = false;
    // Iterar para buscar el contacto
    for (int i = 0; i < numContactos; i++){
        if (listaContactos[i].nombre == nombreBusqueda){
            // Imprimir nombre y telefono al ser encontrado
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
            encontrado = true;  // Identificador de encontrado
            break;  // Salir de la iteración
        }
    }
    // Si no se encuentra, indicarlo
    if (!encontrado){
        std::cout << "Contacto no encontrado. \n";
    }
}