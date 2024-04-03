#include "ahorcado.hpp"
#include <cstdlib> // Para la función rand()
#include <ctime>   // Para la función time()
using namespace std;


void menu(){
    /*
    Mostrar menú interactivo: 
    1. Elegir la dificultad del juego (número de intentos).
    2. Iniciar el juego.
    3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
    4. Ver diccionario de palabras.
    5. Salir del programa.

    */
    cout << "Bienvenido al menu, digite una opcion: " << endl;
    cout << "1. Elegir la dificultad del juego" << endl;
    cout << "2. Iniciar el juego." << endl;
    cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << endl;
    cout << "4. Ver diccionario de palabras." << endl;
    cout << "5. Salir del programa." << endl;
}

void seleccionDificultad(Ahorcado &partida){
    // Selecciona el tipo de dificultad
    int opcion;
    cout << "Seleccione la dificultad: " << endl;
    cout << "1. Facil: 7 intentos permitidos " << endl;
    cout << "2. Intermedio: 5 intentos permitidos " << endl;
    cout << "3. Dificil: 3 intentos permitidos " << endl;
    cin >> opcion;
    switch (opcion){
        case 1:
            partida.intentosMax = 7-1;  // Se le resta 1 porque el contador empieza en 0, de esta forma se tendran solamente 7 intentos
            cout << "Dificultad Facil seleccionada " << endl;
            break;
        case 2:
            partida.intentosMax = 5-1;  // Se le resta 1 porque el contador empieza en 0, de esta forma se tendran solamente 5 intentos
            cout << "Dificultad Intermedia seleccionada " << endl;
            break;
        case 3:
            partida.intentosMax = 3-1;  // Se le resta 1 porque el contador empieza en 0, de esta forma se tendran solamente 3 intentos
            cout << "Dificultad Dificil seleccionada " << endl;
            break;
        default:
            cout << "Opcion Invalida" << endl;
    }
}

void agregarPalabras(string diccionario[], int &tamanoDiccionario){
    // Se modifica el tamaño del diccionario y se agregan las palabras al diccionario
    string palabra;
    cout << "Ingrese la cantidad de palabras que conformaran el diccionario (debe ser menor a 100): " << endl;
    cin >> tamanoDiccionario;
    if (tamanoDiccionario <=0){
        cout << "Entrada invalida" << endl;
    }
    else{
        for (int i= 0; i < tamanoDiccionario; ++i){
            cout << "Ingrese la palabra numero " << i+1 << endl;
            cin >> palabra;
            diccionario[i] = palabra;
        }
    }
}

void mostrarDiccionario(string diccionario[],int tamanoDiccionario){
    // Muestra las palabras que están en el diccionario
    for (int i= 0; i < tamanoDiccionario; ++i){
        cout << "El valor del numero " << i+1 << " del diccionario es : " << diccionario[i] << endl;
    }
}

void inicializar(string diccionario[], int tamanoDiccionario, Ahorcado &partida){
    // Elige una palabra aleatoria del diccionario e inicializa la variable "estadoActual" con giones bajos

    srand(time(nullptr)); // Inicializar la semilla para obtener diferentes valores aleatorios
    int i = rand() % tamanoDiccionario; // Se genera un indice aleatorio
    partida.palabraAdivinar = *(diccionario + i);   // Palabra aleatoria utilizando punteros

    // Ahora se debe inicializar la variable "estadoActual"
    partida.estadoActual = "";
    string *ptrPalabraAdivinar = &partida.palabraAdivinar; // Puntero apunta a la palabra a adivinar
    for  (int j = 0; j < (*ptrPalabraAdivinar).length(); ++j){  // Se utilliza el parentesis para agrupar *ptrPalabraAdivinar
        partida.estadoActual += "_";  // Llenar de "_"
    }
}

string adivinar(Ahorcado &partida, int &aciertos){
    // Verifica si la letra adivinada por el usuario pertenece a la palabra
    // Actualiza el estado de la palabra a adivinar en el caso de que se adivine una letra
    string estado;  // Ganar, perder, continuar
    char letra;
    bool condicionAumento = true;  // Si se falla, disminuye en 1 los intentos restantes
    string *ptrPalabraAdivinar = &partida.palabraAdivinar;
    int posiciones[(*ptrPalabraAdivinar).length()];   // Una lista del tamaño de la cantidad de letras que posee la palabra a adivinar
    cout << "Digite una letra a adivinar" << endl;
    cin >> letra;
    for (int i = 0; i < (*ptrPalabraAdivinar).length(); ++i){  // Iterar sobre la cantidad de letras que poseee la palabra a adivinar
        if ((*ptrPalabraAdivinar)[i] == letra){   // Si el primer caracter de la palabra coincide con la letra del usuario
            partida.estadoActual[i] = letra;
            aciertos ++;
            condicionAumento = false;
        }
    }

    estado = verificarGane(partida, aciertos, condicionAumento);  // Verifica si el juego terminó

    return estado;
}

string verificarGane(Ahorcado &partida, int &aciertos, bool condicionAumento){
    // Verifica si se ha terminado el juego, es decir, que se adivine la palabra o se alcancen la cantidad maxima de intentos
    // Actualiza la catidan de intentos
    string estado;
    string *palabraPtr = &partida.palabraAdivinar;
    int *intentosPtr = &partida.intentosActual;
    if (partida.estadoActual == *palabraPtr){
        cout << "Has adivinado la palabra, ganaste!" << endl;
        estado = "ganar";
        aciertos = 0;
        partida.intentosActual = 0;
    }
    else if (*intentosPtr < partida.intentosMax){
        if (condicionAumento){
        partida.intentosActual++;
        }
        cout << "Has tenido " << aciertos << " aciertos:" << endl;
        cout << partida.estadoActual << endl;
        estado = "continue";
        }
    else if (*intentosPtr == partida.intentosMax){  // Se le suma 1 debido a que el contador empieza en 0
        string palabraCompleta;
        cout << "Se te acabaron los intentos" << endl;
        cout << "Tienes una ultima oportunidad, debes escribir la palabra completa" << endl;
        cin >> palabraCompleta;
        if (palabraCompleta == *palabraPtr){
            cout << "Wow, acertaste, has ganado" << endl;
            estado = "ganar";
        }
        else{
            cout << "lo siento, perdiste" << endl;
            estado = "perder";
            aciertos = 0;
            partida.intentosActual = 0;
        }
    }

    return estado;
}

