#ifndef MUNDO_HPP
#define MUNDO_HPP

#include <string>
#include <iostream>
using namespace std;

void menu();
    /*
    Mostrar menú interactivo: 
    1. Imprimir información de los paises.
    2. Comparar paises.
    3. Agregar un nuevo país
    4. Eliminar un país.
    5. Salir del programa.
    */

bool esPrimo(int numero);



class Planeta{
    private:
        Pais paises[100];  // Maximo 100 paises
    public:
        Planeta();
        Continentes p_continentes[5];  // Lista de objetos continentes
        string p_aviones[3];  // Lugares por los que pasa
        int cantidadPaises;
        void agregarPais();
        void compararPaises();
        void eliminarPais();   
};      

class Pais{
    public:
        Pais();
        Pais(string nombre, int identificador, bool p_5G, int habitantes);
        int p_identificador; 
        bool p_5G;   
        int habitantesTrabajadores();
        int operator==(const Pais &p2);  // Verifica si son del mismo tipo
        string nombre;
        int p_habitantes;
        int p_PIB;
        int generarPIB();
        string tipo;
};

class PaisPrimerMundo: public Pais{

    public:
        PaisPrimerMundo(string nombre, int identificador, int habitantes, bool p_5G , bool centroInvestigacion);
        bool p_centroInvestigacion;   // Posee uno o no
};


class PaisEnDesarrollo: public Pais{
    private:
        int cantidadHabitantes;
    public:
        PaisEnDesarrollo(string nombre, int identificador, int habitantes, bool p_5G);

};

class Continentes{
    public:
        string c_nombre;       // Cantidad total de paises en el continente
        int cantidadPaises;
        Pais paises[50];       // paises (cantidad max 50 paises)
        Continentes();
        Continentes(string nombre);
        void agregarPais(const Pais &pais);
        void eliminarPais(int indice);
};


void ImprimirInformacion(Planeta p);
    // imprimir, de manera ordenada, toda la información sobre dicho Planeta


#endif // MUNDO_HPP


// , si tienenuo, el PIB, 

// Para los del desarrollo decir la cantidad de habitantes, 
//para los de primer mundo  decir cuales trabajan y cuales no, si tienen centro de investigacion y desarrollo
//Decir si los paises tienen 5G o no