// Bucles for, while, do-while
#include <iostream>
using namespace std;  // para poder usar el cout
int main() {
    int x = 0;
    int z = 0;
    // Ciclo for
    for(int i = 0; i<=5; ++i) {
        cout << i << " bucle for \n";
    }

    // Ciclo while
    while (x <= 5) {
        cout << x << " bucle while \n";
        x++;
    }

    // Ciclo do While
    do {  // Se hace el do antes de verificar el while
        cout << z << " do while \n";
        z++;
    }
    while (z <= 5);

    return 0;
}