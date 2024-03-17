// Usos de las variables locales/globales
#include <iostream>
using namespace std;  // para poder usar el cout
int g;  // Variable global se declara afuera del main
int main() {
    // Variables locales se declaran dentro de la funcion
    int a,b;  
    int c;

    a = 10;
    b = 20;
    // Las variables locales solo pueden ser usadas dentro
    c = a + b;
    // La variable global puede ser usada dentro y fuera
    g = a + b;
    cout << c << endl;
    cout << g << endl;
    return 0;
}