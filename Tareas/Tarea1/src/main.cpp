#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "ahorcado.hpp"
using namespace std;


int main(){
    Ahorcado partida1;
    int eleccion;
    bool condicion = true;  // Condicion del do-while
    do{
        menu();  // Muestra el menú
        cin >> eleccion;
    
        switch (eleccion) {
            case 1:
                // Elejir dificultad
                seleccionDificultad(partida1);
                break;
            
            case 2:
                // Iniciar juego
                
                break;
            
            case 3:
                // Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
                
            
            case 4:
                // Ver diccionario de palabras.
                
                
                break;
            
            case 5:
                cout << "Saliendo del programa" << endl;  // Caso que opcion = 5 (salir)
                condicion = false;
                break;
            
            default:
                cout << "Digite un numero válido" << endl;
        }
    }
    while(condicion);

    return 0;
}