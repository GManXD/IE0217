#include "Mundo.hpp"
#include <cstdlib> // Para la función rand()
#include <ctime>   // Para la función time()
using namespace std;

void menu(){
    //Mostrar menú interactivo: 
   
    cout << "Bienvenido al menu, digite una opcion: " << endl;
    cout << "1. Imprimir informacion de los paises." << endl;
    cout << "2. Comparar paises." << endl;
    cout << "3. Agregar un nuevo pais" << endl;
    cout << "4. Eliminar un pais." << endl;
    cout << "5. Salir del programa." << endl;
}

void imprimirInformacion(Planeta p){
    cout << "Informacion General: " << endl;
    cout << "Planeta posee " << p.p_cantidadContinentes << " continentes: " << p.p_continentes[];
    cout << "De estos continentes el avion pasa por: " << 
}

Planeta::Planeta(){
    // Se crearn los objetos tipo continente
    // Se define cuales continentes tienen avion
    p_continentes[0] = Continentes("America");
    p_continentes[1] = Continentes("Europa");
    p_continentes[2] = Continentes("Africa");
    p_continentes[3] = Continentes("Oceania");
    p_continentes[4] = Continentes("Asia");
    p_aviones[0] = "America";
    p_aviones[1] = "Asia";
    p_aviones[2] = "Europa";
    srand(time(NULL));
    agregarPais();
}


void planeta::agregarPais()

bool esPrimo(int numero){
    // Retorna True si un numero es primo, sino retorna False
    if (numero == 0 || numero == 1)
        return false;       // No es primo
    else if (numero == 2)
        return true;
    for (int i = 2; i<numero; ++i){
        if (numero%i == 0)
            return false;   // No es primo
    }
    return true;  // Si ningun caso de los anteriores se cumple, es oruni
}

Planeta::Planeta(){
    // Constructor de la clase Planeta
    this->p_cantidadContinentes = 5;
    string p_continentes[p_cantidadContinentes] = {"America", "Europa", "Africa", "Oceania", "Asia"};
    
}


Pais::Pais(string nombre, int identificador, bool p_5G, int habitantes){
    this->nombre = nombre;
    this->p_identificador = identificador;
    this->p_habitantes = habitantes;
    this->p_5G = p_5G;
    p_PIB = generarPIB();
}

int Pais::operator==(const Pais &p2){
    if (esPrimo(this->p_identificador) == esPrimo(p2.p_identificador))
        return true;    // Son iguales
    return false;       // No son iguales
}

int Pais::generarPIB(){
    return rand() % 1000000000;
}

Continentes::Continentes(string nombre){
    this->c_nombre = nombre;
    this->cantidadPaises = 0;
}

void Continentes::agregarPais(const Pais &pais){
    paises[cantidadPaises++] = pais;
}