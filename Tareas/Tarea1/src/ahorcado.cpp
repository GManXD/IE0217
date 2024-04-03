#include "ahorcado.hpp"
using namespace std;

string diccionario[];  // #AGREGAR PALABRAS AL DICCIONARIO

struct Ahorcado {
    string palabraAdivinar;
    string estadoActual;    // letras encontradas y no encontradas
    int intentosMax;
    int intentosActual;
};

void inicializar(){
    // Elige una palabra aleatoria del diccionario e inicializa la variable "estadoActual" con giones bajos
    // Establece el numero maximo de intentos permitidos y el numero actual de intentos realizados
}


void adivinar(){
    // Verifica si la letra adivinada por el usuario pertenece a la palabra
    // Actualiza el estado de la palabra a adivinar en el caso de que se adivine una letra
}

void verificarGane(){
    // Verifica si se ha terminado el juego, es decir, que se adivine la palabra o se alcancen la cantidad maxima de intentos
    // Actualiza la catidan de intentos
}

string menu(){
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (número de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.

    */
   bool condicion = true;
   string eleccion;
   do{
        cout << "Bienvenido al menú, digite una opcion: " << endl;
        cout << "1. Elegir la dificultad del juego" << endl;
        cout << "2. Iniciar el juego." << endl;
        cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << endl;
        cout << "4. Ver diccionario de palabras." << endl;
        cout << "5. Salir del programa." << endl;
        cin >> eleccion;

        if (eleccion == "5"){
            condicion = false;
        }

        if (eleccion == "1" || eleccion == "2" || eleccion == "3" || eleccion == "4" || eleccion == "5"){
            return eleccion;
        }
        else{
            cout << "Entrada invalida, digite de nuevo" << endl;
        }
   }
    while (condicion);
}