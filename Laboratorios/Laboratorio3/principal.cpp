#include <iostream>
#include <string>

using namespace std;

struct Libro{
    // Alberga la informacion de un libro y la direccion del que sigue
    string titulo;
    string autor;
    string genero;
    // Puntero al libro que sigue
    Libro* siguiente;

};

enum opciones{
    // Opciones disponibles para el menu
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS = 2,
    SALIR = 3,
    OPCIONES_MAX
};

void agregarLibro(Libro*& lista){
    // Pregunta la informacion de un libro y lo agrega
    // Se asigna memoria dinamica
    Libro* nuevoLibro = new Libro;

    // Ingresar informacion del libro

    cout << "Ingrese el titulo del libro: " << endl;
    cin.ignore();   // Vaciar buffer
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: " << endl;
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl;
    getline(cin, nuevoLibro->genero);
    
    // El puntero siguiente apunta al libro anterior
    nuevoLibro->siguiente = lista;
    // La variable lista ahora va a apuntar a este libro nuevo
    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;
}

void mostrarLibros(Libro* lista){
    // Muestra la informacion de todos los libros

    if (lista == nullptr){  // Caso que no tenga libros
        cout << "La libreria no tiene libros." << endl;
        return;
    }

    cout << "Lista de libros: " << endl;
    while(lista != nullptr){
        cout << "Titulo: " << lista->titulo << endl;
        cout << "Autor: " << lista->autor << endl;
        cout << "Genero: " << lista->genero << endl << endl;
        lista = lista->siguiente;  // Ahora lista apunta al libro que sigue
    }
}

void liberarMemoria(Libro* &lista){
    // Libera memoria dinamica
    while (lista != nullptr){
        // Se crea un puntero temporal para almacenar la direccion del libro a borrar
        Libro* temp = lista;
        // Ahora lista debe apuntar al libro que sigue
        lista = lista->siguiente;
        delete temp;
    }
}

int main(){
    // Primer Libro puntero que no apunta a nada
    Libro* listaLibros = nullptr;
    int opcion;
    do{
        cout << "Seleccione su opcion" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        // Casos del menu
        switch (opcion){
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no permitida. " << endl;
                break;
        }
    } while (opcion != SALIR);
    // Liberar la memoria dinamica utilizada
    liberarMemoria(listaLibros);

    return 0;
}