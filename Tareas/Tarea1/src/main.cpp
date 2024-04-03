#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "ahorcado.hpp"
using namespace std;


int main(){
    string eleccion = menu();
    int opcion = stoi(eleccion);    // Se realiza la conversion a int para poder utilizar el switch
    switch (opcion) {
    case 1:
        // Elejir dificultad
        
        break;
    
    case 2:
        // Iniciar juego
        
        break;
    
    case 3:
        // Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
        
        break;
    
    case 4:
        // Ver diccionario de palabras.
        
        break;
    
    default:
        cout << "Saliendo del programa" << endl;  // Caso que opcion = 5 (salir)
        break;
    }


    return 0;
}