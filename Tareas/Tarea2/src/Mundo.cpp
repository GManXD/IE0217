#include "Mundo.hpp"
#include <cstdlib> // Para la función rand()
#include <ctime>   // Para la función time()

using namespace std;

void menu() {
    // Mostrar menú interactivo: 

    cout << "Bienvenido al menu, digite una opcion: " << endl;
    cout << "1. Imprimir informacion de los paises." << endl;
    cout << "2. Comparar paises." << endl;
    cout << "3. Agregar un nuevo pais" << endl;
    cout << "4. Eliminar un pais." << endl;
    cout << "5. Salir del programa." << endl;
}

bool esPrimo(int numero) {
    // Retorna True si un numero es primo, sino retorna False
    if (numero == 0 || numero == 1) {
        return false;       // No es primo
    } else if (numero == 2) {
        return true;
    }
    for (int i = 2; i < numero; ++i) {
        if (numero % i == 0)
            return false;   // No es primo
    }
    return true;  // Si ningun caso de los anteriores se cumple, es primo
}

Planeta::Planeta() {
    // Se crean los objetos tipo continente
    // Se define cuales continentes tienen avion
    p_continentes[0] = Continentes("America");
    p_continentes[1] = Continentes("Europa");
    p_continentes[2] = Continentes("Africa");
    p_continentes[3] = Continentes("Oceania");
    p_continentes[4] = Continentes("Asia");
    // Por cuales continentes pasan aviones:
    p_aviones[0] = "America";
    p_aviones[1] = "Asia";
    p_aviones[2] = "Europa";
    srand(time(NULL));
}

void Planeta::agregarPais() {
    int continente;
    string nombre;
    int identificador;
    int habitantes;
    bool p_5G;
    bool centroInvestigacion;
    cout << "En cual continente desea agregar el pais? (digite el numero correspondiente); " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << p_continentes[i].c_nombre << endl;
    }
    cin >> continente;
    cout << "Ingrese el nombre del pais" << endl;
    cin >> nombre;
    cout << "Ingrese el identificador del pais" << endl;
    cin >> identificador;
    cout << "Ingrese la cantidad de habitantes del pais" << endl;
    cin >> habitantes;
    cout << "Ingrese un 1 si el pais tiene tecnologia 5G, de otra forma ingrese 0." << endl;
    cin >> p_5G;
    cout << "Ingrese un 1 si el pais tiene centro de investigacion, de otra forma ingrese 0." << endl;
    cin >> centroInvestigacion;
    if (esPrimo(identificador)) {
        p_continentes[continente - 1].agregarPais(PaisPrimerMundo(nombre, identificador, habitantes, p_5G, centroInvestigacion));
    } else {
        p_continentes[continente - 1].agregarPais(PaisEnDesarrollo(nombre, identificador, habitantes, p_5G));
    }
    paises[cantidadPaises] = Pais(nombre, identificador, p_5G, habitantes);
    cantidadPaises += 1;
    cout << "Se ha agregado el pais" << endl;
}

void Planeta::compararPaises() {
    int p1, p2;
    cout << "Los paises que hay son: " << endl;
    for (int i = 0; i < cantidadPaises; ++i) {
        cout << i + 1 << ". " << paises[i].nombre << endl;
    }
    cout << "Ingrese el numero del primer pais a comparar" << endl;
    cin >> p1;
    cout << "Ingrese el numero del segundo pais a comparar" << endl;
    cin >> p2;
    if (paises[p1] == paises[p2]) {
        cout << "Ambos paises son del mismo tipo" << endl;
    } else {
        cout << "Los paises no son del mismo tipo" << endl;
    }
}

void Planeta::eliminarPais() {
    int continente;
    int p;
    cout << "Ingrese el numero de continente del cual desea eliminar un pais" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << p_continentes[i].c_nombre << endl;
    }
    cin >> continente;
    for (int i = 0; i < p_continentes[continente - 1].cantidadPaises; ++i) {
        cout << "Los paises son: " << endl;
        cout << i + 1 << ". " << p_continentes[continente - 1].paises[i].nombre << endl;
    }
    cout << "Ingrese el numero del pais a eliminar" << endl;
    cin >> p;
    p_continentes[continente - 1].eliminarPais(p);
    cout << "Se ha eliminado el pais" << endl;
}

Pais::Pais(string nombre, int identificador, bool p_5G, int habitantes) {
    this->nombre = nombre;
    this->p_identificador = identificador;
    this->p_habitantes = habitantes;
    this->p_5G = p_5G;
    p_PIB = generarPIB();
}

Pais::Pais() {} // Constructor predeterminado

int Pais::operator==(const Pais& p2) {
    if (esPrimo(this->p_identificador) == esPrimo(p2.p_identificador))
        return true;    // Son iguales
    else
        return false;       // No son iguales
}

int Pais::generarPIB() {
    return rand() % 1000000000;
}

PaisPrimerMundo::PaisPrimerMundo(string nombre, int identificador, int habitantes, bool p_5G, bool centroInvestigacion) {
    this->nombre = nombre;
    this->p_identificador = identificador;
    this->p_habitantes = habitantes;
    this->p_5G = p_5G;
    this->p_centroInvestigacion = centroInvestigacion;
    this->tipo = "Primer Mundo";
}

int Pais::habitantesTrabajadores() {
    return rand() % p_habitantes;
}

PaisEnDesarrollo::PaisEnDesarrollo(string nombre, int identificador, int habitantes, bool p_5G) {
    this->nombre = nombre;
    this->p_identificador = identificador;
    this->p_habitantes = habitantes;
    this->p_5G = p_5G;
    this->tipo = "En Desarrollo";
}

Continentes::Continentes(string nombre) {
    this->c_nombre = nombre;
    this->cantidadPaises = 0;
}

Continentes::Continentes() {}

void Continentes::agregarPais(const Pais& pais) {
    paises[cantidadPaises] = pais;      // El contador de paises empieza en 1
    cantidadPaises += 1;
}

void Continentes::eliminarPais(int indice) {
    if (indice < 0 || indice >= cantidadPaises) {
        cout << "Numero de pais no valido." << endl;
        return;
    }

    // Mover todos los países después del índice hacia atrás
    for (int i = indice; i < cantidadPaises - 1; ++i) {
        paises[i] = paises[i + 1];
    }

    // Reducir la cantidad de países
    cantidadPaises--;
}

void ImprimirInformacion(Planeta p) {
    // Informacion General:
    cout << "Informacion General: " << endl;
    cout << "Planeta posee 5 continentes: ";
    for (int i = 0; i < 5; ++i) {
        cout << p.p_continentes[i].c_nombre << ", ";
    }
    cout << endl;
    cout << "De estos continentes, el avión pasa por los siguientes: ";
    for (int i = 0; i < 3; ++i) {
        cout << p.p_aviones[i];
    }
    cout << endl;

    // Informacion sobre los paises: 
    cout << "\nInformacion sobre los paises: " << endl;
    for (int i = 0; i < 5; ++i) {   // Iterar cada continente
        cout << p.p_continentes[i].c_nombre << " posee " << p.p_continentes[i].cantidadPaises << " países, ";
        int primerMundo = 0, desarrollo = 0;
        for (int j = 0; j < p.p_continentes[i].cantidadPaises; ++j) {
            if (esPrimo(p.p_continentes[i].paises[j].p_identificador)) {
                primerMundo += 1;
            } else {
                desarrollo += 1;
            }
        }
        cout << primerMundo << " son de primer mundo y " << desarrollo << " son en desarrollo." << endl;
    }

    // Informacion sobre los países de primer mundo :
    cout << "Información sobre los países de primer mundo:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < p.p_continentes[i].cantidadPaises; ++j) {
            Pais* pais = &p.p_continentes[i].paises[j];
            if (pais->tipo == "Primer Mundo") {
                cout << "Nombre: " << pais->nombre << endl;
                cout << "PIB: " << pais->p_PIB << endl;
                int trabajadores = pais->habitantesTrabajadores();
                cout << "Habitantes que trabajan: " << trabajadores;
                cout << "Habitantes que no trabajan: " << pais->p_habitantes - trabajadores;
                cout << "Poseen 5G: " << pais->p_5G;
            }
        }
    }

    cout << "Información sobre los países en desarrollo:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < p.p_continentes[i].cantidadPaises; ++j) {
            Pais* pais = &p.p_continentes[i].paises[j];
            if (pais->tipo == "En Desarrollo") {
                cout << "Nombre: " << pais->nombre << endl;
                cout << "PIB: " << pais->p_PIB << endl;
                int trabajadores = pais->habitantesTrabajadores();
                cout << "Habitantes : " << pais->p_habitantes;
                cout << "Poseen 5G: " << pais->p_5G;
            }
        }
    }
}
