#include "Mundo.hpp"
using namespace std;

int main(){
    int eleccion;               // Eleccion del menu
    bool condicion = true;      // Condicion del do-while
    Planeta planeta;

    do{
        menu();  // Muestra el menú
        cin >> eleccion;
    
        switch (eleccion) {
            case 1:
                ImprimirInformacion(planeta);
                break;
            
            case 2:  // Comparar paises
                
                planeta.compararPaises();
                break;
            
            case 3: // Agregar pais

                planeta.agregarPais();
                break;
            
            case 4:  // Eliminar pais
                planeta.eliminarPais();
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