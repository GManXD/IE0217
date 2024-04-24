// Ejemplo de algoritmo de ordenamiento
#include <iostream>
#include <algorithm>
#include <vector>

// Funcion para comparar 2 valores
bool myfunction (int i , int j) {return (i<j);}

// Struct para comparar 2 valores
struct myclass{
    bool operator() (int i, int j) {return (i<j);}
} myobject;

int main(){
    int myints[] = {32,71,12,45,26,80,53,33};
    std::vector<int> myvector (myints, myints+8);

    // Usar el comparador por defecto (<)
    std::sort (myvector.begin(), myvector.begin()+4);   // Ordenar los primeros 4

    // Usar la funcion de comparador
    std::sort (myvector.begin()+4, myvector.end(), myfunction); // Ordenar los ultimos 4

    // Usar el objeto de comparador
    std::sort (myvector.begin(), myvector.end(), myobject);     // Ordenar todos

    //imprimir contenido
    std::cout << "myvector contains :";
    for(std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << "\n";

    return 0;
}