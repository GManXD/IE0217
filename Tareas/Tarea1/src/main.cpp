#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "ahorcado.hpp"
using namespace std;


int main(){
    Ahorcado partida1;
    int eleccion;
    bool condicion = true;  // Condicion del do-while
    string diccionario[100];  // Un maximo de 100 palabras
    int tamanoDiccionario = 0;  // Cantidad de palabras inicialmente en el diccionario
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
                agregarPalabras(diccionario, tamanoDiccionario);

                break;
            
            case 4:
                // Ver diccionario de palabras.
                mostrarDiccionario(diccionario, tamanoDiccionario);
                
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