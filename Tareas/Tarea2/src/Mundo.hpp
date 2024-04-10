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


void ImprimirInformacion(Planeta p);
    // imprimir, de manera ordenada, toda la información sobre dicho Planeta

class Planeta{
    public:
        int p_cantidadContinentes;  // Cantidad de continentes
        Planeta();
        
};      

class Pais{
    protected:
        int p_identificador;
        Pais operator==(const Pais &p2);  // Verifica si son del mismo tipo
    public:
        Pais(string nombre, int identificador);
        string nombre;
        int p_habitantes;
        int p_PIB;
        int PIB();
        bool p_5G;                          // Si tiene 5G o no
        
};

class PaisPrimerMundo: public Pais{
    private:
        int HabitantesTrabajadores(); 
    protected:
        bool p_centroInvestigacion;   // Posee uno o no
};


class PaisEnDesarrollo: public Pais{
    private:
        int cantidadHabitantes();
};

class Continentes{
    public:
        int c_cantidadPaises;       // Cantidad total de paises en el continente
        int c_paisesPrimerMundo;
        int c_paisesDesarrollo;
        bool c_aeropuerto;      // Si tienen o no aeropuerto
};

#endif // MUNDO_HPP


// , si tienen aeropuerto, el PIB, 

// Para los del desarrollo decir la cantidad de habitantes, 
//para los de primer mundo  decir cuales trabajan y cuales no, si tienen centro de investigacion y desarrollo
//Decir si los paises tienen 5G o no