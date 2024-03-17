#include <iostream>
using namespace std;  // para poder usar el cout

void test() {
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main() {
    test();  // En la primera llamada se inicializa la variable estatica
    test();  // La variable ya ha sido inicializada entonces se sigue la siguiente linea de codigo en la funcion test()
    return 0;

}