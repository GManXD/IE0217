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


void ImprimirInformacion(Planeta p);
    // imprimir, de manera ordenada, toda la información sobre dicho Planeta

class Planeta{
    private:
        Continentes p_continentes[5];  // Lista de objetos continentes
        string p_aviones[3];  // Lugares por los que pasa
    public:
        Planeta();
        void agregarPais();
        void compararPaises();
        void eliminarPais();
        
};      

class Pais{
    protected:
        int p_identificador;
        int operator==(const Pais &p2);  // Verifica si son del mismo tipo
    public:
        Pais(string nombre, int identificador, bool p_5G, int habitantes);
        string nombre;
        int p_habitantes;
        int p_PIB;
        int generarPIB();
        bool p_5G;                          // Si tiene 5G o no
        
};

class PaisPrimerMundo: public Pais{
    private:
        int habitantesTrabajadores();
    protected:
        bool p_centroInvestigacion;   // Posee uno o no
        PaisPrimerMundo(int identificador, int habitantes, bool p_5G , bool centroInvestigacion);
};


class PaisEnDesarrollo: public Pais{
    private:
        int cantidadHabitantes;
    public:
        PaisEnDesarrollo(int identificador, int habitantes, bool p_5G);

};

class Continentes{
    public:
        string c_nombre;       // Cantidad total de paises en el continente
        int cantidadPaises;
        Pais paises[50];       // paises (cantidad max 50 paises)
        Continentes(string nombre);
        void agregarPais(const Pais &pais);
};

#endif // MUNDO_HPP


// , si tienen aeropuerto, el PIB, 

// Para los del desarrollo decir la cantidad de habitantes, 
//para los de primer mundo  decir cuales trabajan y cuales no, si tienen centro de investigacion y desarrollo
//Decir si los paises tienen 5G o no