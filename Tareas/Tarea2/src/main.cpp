#include "Mundo.hpp"
using namespace std;

int main(){
    int eleccion;               // Eleccion del menu
    bool condicion = true;      // Condicion del do-while


    do{
        menu();  // Muestra el menú
        cin >> eleccion;
    
        switch (eleccion) {
            case 1:
        
                break;
            
            case 2:

                break;
            
            case 3:


                break;
            
            case 4:
                
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