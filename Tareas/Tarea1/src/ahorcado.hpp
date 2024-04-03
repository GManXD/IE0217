#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>
using namespace std;


struct Ahorcado {
    string palabraAdivinar;
    string estadoActual;    // letras encontradas y no encontradas
    int intentosMax;
    int intentosActual;
};

string menu();
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (n´umero de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.

    Devuelve un valor tipo string que indica la eleccion del usuario
    */

int seleccionDificultad(Ahorcado &partida);

void agregarPalabras(string diccionario[], int tamanoDiccionario);
    // Agrega palabras las palabras al diccionrio

void mostrarDiccionario(string diccionario[], int tamanoDiccionario);
    // Muestra las palabras que contien el diccionario

void inicializar();
    // Elige una palabra aleatoria del diccionario e inicializa la variable "estadoActual" con giones bajos
    // Establece el numero maximo de intentos permitidos y el numero actual de intentos realizados

void adivinar();
    // Verifica si la letra adivinada por el usuario pertenece a la palabra
    // Actualiza el estado de la palabra a adivinar en el caso de que se adivine una letra

void verificarGane();
    // Verifica si se ha terminado el juego, es decir, que se adivine la palabra o se alcancen la cantidad maxima de intentos
    // Actualiza la catidan de intentos








#endif // AHORCADO_HPP