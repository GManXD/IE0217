#include "ahorcado.hpp"
using namespace std;


string menu(){
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (número de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.

    */
    cout << "Bienvenido al menú, digite una opcion: " << endl;
    cout << "1. Elegir la dificultad del juego" << endl;
    cout << "2. Iniciar el juego." << endl;
    cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << endl;
    cout << "4. Ver diccionario de palabras." << endl;
    cout << "5. Salir del programa." << endl;
}

int seleccionDificultad(Ahorcado &partida){
    int opcion;
    cout << "Seleccione la dificultad: " << endl;
    cout << "1. Facil: 7 intentos permitidos " << endl;
    cout << "2. Intermedio: 5 intentos permitidos " << endl;
    cout << "3. Dificil: 3 intentos permitidos " << endl;
    cin >> opcion;
    switch (opcion){
        case 1:
            partida.intentosMax = 7;
            break;
        case 2:
            partida.intentosMax = 5;
            break;
        case 3:
            partida.intentosMax = 3;
            break;
        default:
            cout << "Opcion Invalida" << endl;
    }
}

void agregarPalabras(int tamanoDiccionario, char diccionario[]){
    for (int i; i < tamanoDiccionario; ++i){
        cout << "Ingrese la palabra numero " << i+1 << endl;
        cin >> diccionario[i];
    }
}

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

