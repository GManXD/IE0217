#include <iostream>
#include <string>
#include "ahorcado.hpp"
using namespace std;


int main(){
    Ahorcado partida1;          // estructura Ahorcado
    int eleccion;               // Eleccion del menu
    bool condicion = true;      // Condicion del do-while
    string diccionario[100];    // Un maximo de 100 palabras
    string *ptrDiccionario = diccionario;  // Puntero de la lista diccionario
    int tamanoDiccionario = 0;  // Cantidad de palabras inicialmente en el diccionario
    partida1.intentosMax = 0;  // Valor por defecto para evitar inicializacion sin antes ser cambiado
    string estado = "continue"; // Ganar, perder, continuar
    int aciertos = 0;           // Aciertos iniciales
    partida1.intentosActual = 0;  // 0 intentos iniciales
    do{
        menu();  // Muestra el menú
        cin >> eleccion;
    
        switch (eleccion) {
            case 1:
                // Elegir dificultad
                seleccionDificultad(partida1);

                break;
            
            case 2:
                // Iniciar juego
                    if (partida1.intentosMax != 0 && tamanoDiccionario != 0){
                    inicializar(diccionario, tamanoDiccionario, partida1);  // Se inicializa la variables que registra las palabras que adivina
                    do{
                        estado = adivinar(partida1, aciertos);  // Se elije su pronostico para la letra a adivinar
                    }
                    while (estado == "continue");  // Continuar hasta que el estado cambie a "perder" o "ganar"
                    //verificarGane() se ejecuta dentro de adivinar()
                    }
                    else{
                        cout << "Aun no se ha seleccionado ninguna dificultad o el diccionario esta vacio" << endl;
                    }
                
                break;
            
            case 3:
                // Agregar palabras al arreglo de palabras que se escogen aleatoriamente.
                agregarPalabras(diccionario, tamanoDiccionario);

                break;
            
            case 4:
                // Ver diccionario de palabras.
                if (tamanoDiccionario == 0){
                    cout << "El diccionario esta vacio" << endl;
                }
                else{
                    mostrarDiccionario(diccionario, tamanoDiccionario);
                }
                
                break;
            
            case 5:
                cout << "Saliendo del programa" << endl;  // Caso que opcion = 5 (salir)
                condicion = false;
                break;
            
            default:
                cout << "Digite un numero valido" << endl;
        }
    }
    while(condicion);

    return 0;
}