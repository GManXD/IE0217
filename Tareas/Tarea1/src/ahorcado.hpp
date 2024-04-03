/**
 * @file ahorcado.hpp
 * @version 1.0
 * @date 03/04/2024
 * @author Oscar Rojas Rojas
 * @title Encabezados
 * @brief Declaracion de la estructura Ahorcado y funciones
*/


#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Almacena informacion como la palabra que se debe adivinar, las letras adivinadas, recuento de intentos y el maximo numero de intentos
 * 
*/
struct Ahorcado {
    // Almacena los datos que determinan si se gana o pierde, y la palabra a adivinar
    string palabraAdivinar;
    string estadoActual;    // letras encontradas y no encontradas
    int intentosMax;
    int intentosActual;
};

/**
 * @brief Muestra el menú interactivo del juego del Ahorcado.
 * El menú presenta opciones para elegir la dificultad, iniciar el juego, agregar palabras al diccionario,
 * ver el diccionario de palabras y salir del programa.
 */

void menu();
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (n´umero de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.
    */


/**
 * @brief Permite al jugador seleccionar la dificultad del juego.
 * @param partida Referencia a la estructura Ahorcado que almacena la información del juego.
 */

void seleccionDificultad(Ahorcado &partida);
    // Establece el numero maximo de intentos permitidos


/**
 * @brief Permite al jugador agregar palabras al diccionario
 * @param diccionario Arreglo de palabras tipo string que se utilizaran para el juego
 * @param tamanoDiccionario Variable tipo entera que almacena el tamaño del diccionario, se envía por referencia
*/
void agregarPalabras(string diccionario[], int &tamanoDiccionario);
    // Se modifica el tamaño del diccionario y se agregan las palabras al diccionario


/**
 * @brief Le muestra al jugador las palabras contenidas en el diccionario
 * @param diccionario Arreglo de palabras tipo string que se utilizaran para el juego
 * @param tamanoDiccionario Variable tipo entera que almacena el tamaño del diccionario
*/
void mostrarDiccionario(string diccionario[], int tamanoDiccionario);
    // Muestra las palabras que contien el diccionario


/**
 * @brief Elige de manera aleatoria una palabra del diccionario y inicializa una variable en la cual se observará las letras adivinadas y faltantes.
 * @param diccionario Arreglo de palabras tipo string que se utilizaran para el juego
 * @param tamanoDiccionario Variable tipo entera que almacena el tamaño del diccionario
 * @param partida Referencia a la estructura Ahorcado que almacena la información del juego.
*/
void inicializar(string diccionario[], int tamanoDiccionario, Ahorcado &partida);
    // Elige una palabra aleatoria del diccionario e inicializa la variable "estadoActual" con giones bajos


/**
 * @brief Verifica si la letra adivinada por el usuario pertenece a la palabra a adivinar y muestra cuales han sido adivinadas hasta el momento.
 * @param partida Referencia a la estructura Ahorcado que almacena la información del juego.
 * @param aciertos Referencia a la variable aciertos que almacena la cantidad de aciertos obtenidos
 * @return El estado de si se ha ganado, perdido o si se continua el juego
*/
string adivinar(Ahorcado &partida, int &aciertos);
    // Verifica si la letra adivinada por el usuario pertenece a la palabra
    // Actualiza el estado de la palabra a adivinar en el caso de que se adivine una letra


/**
 * @brief Verifica si el juego ha terminado, lleva el conteo del numero de intentos y proporciona una "ultima oportunidad" al jugador
 * @param partida Referencia a la estructura Ahorcado que almacena la información del juego.
 * @param aciertos Referencia a la variable aciertos que almacena la cantidad de aciertos obtenidos
 * @param condicionAumento Variable que indica si se debe aumentar la cantidad de intentos realizados o no, dependiendo si falló o no.
 * @return El estado de si se ha ganado, perdido o si se continua el juego
*/
string verificarGane(Ahorcado &partida, int &aciertos, bool condicionAumento);
    // Verifica si se ha terminado el juego, es decir, que se adivine la palabra o se alcancen la cantidad maxima de intentos
    // Actualiza la catidan de intentos

#endif // AHORCADO_HPP