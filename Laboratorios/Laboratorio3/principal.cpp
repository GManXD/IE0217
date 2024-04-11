#include <iostream>
#include <string>

using namespace std;

struct Libro{
    string titulo;
    string autor;
    string genero;
    // Puntero al siguiente libro
    Libro* siguiente;

};

enum opciones{
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS = 2,
    SALIR = 3,
    OPCIONES_MAX
};

void agregarLibro(Libro*& lista){
    // Pregunta la informacion de un libro y lo agrega
    // Se asigna memoria dinamica
    Libro* nuevoLibro = new Libro;

    cout << "Ingrese el titulo del libro: " << endl;
    getline(cin, nuevoLibro->titulo);

    cout << "Ingrese el autor del libro: " << endl;
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl;
    getline(cin, nuevoLibro->genero);

    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;
}

void mostrarLibros(Libro* lista){
    // Muestra la informacion de todos los libros
    if (lista == nullptr){
        cout << "La libreria no tiene libros." << endl;
        return;
    }

    cout << "Lista de libros: " << endl;
    while(lista != nullptr){
        cout << "Titulo: " << lista->titulo << endl;
        cout << "Autor: " << lista->autor << endl;
        cout << "Genero: " << lista->genero << endl << endl;
        lista = lista->siguiente;
    }
}

void liberarMemoria(Libro* &lista){
    // Libera memoria dinamica
    while (lista != nullptr){
        Libro* temp = lista;
        lista = lista->siguiente;
        delete temp;
    }
}

int main(){
    Libro* listaLibros = nullptr;
    int opcion;
    do{
        cout << "Seleccione su opcion" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

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
    } while (opcion != 3);

    liberarMemoria(listaLibros);

    return 0;
}