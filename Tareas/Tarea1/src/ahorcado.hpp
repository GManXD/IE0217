#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>
using namespace std;


struct Ahorcado {
    // Almacena los datos que determinan si se gana o pierde, y la palabra a adivinar
    string palabraAdivinar;
    string estadoActual;    // letras encontradas y no encontradas
    int intentosMax;
    int intentosActual;
};

void menu();
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (n´umero de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.

    */

void seleccionDificultad(Ahorcado &partida);
    // Establece el numero maximo de intentos permitidos

void agregarPalabras(string diccionario[], int &tamanoDiccionario);
    // Se modifica el tamaño del diccionario y se agregan las palabras al diccionario

void mostrarDiccionario(string diccionario[], int tamanoDiccionario);
    // Muestra las palabras que contien el diccionario

void inicializar(string diccionario[], int tamanoDiccionario, Ahorcado &partida);
    // Elige una palabra aleatoria del diccionario e inicializa la variable "estadoActual" con giones bajos


string adivinar(Ahorcado &partida, int &aciertos);
    // Verifica si la letra adivinada por el usuario pertenece a la palabra
    // Actualiza el estado de la palabra a adivinar en el caso de que se adivine una letra

string verificarGane(Ahorcado &partida, int &aciertos, bool condicionAumento);
    // Verifica si se ha terminado el juego, es decir, que se adivine la palabra o se alcancen la cantidad maxima de intentos
    // Actualiza la catidan de intentos

#endif // AHORCADO_HPP