// Programa 1 donde se encuentra la inicializacion de count
#include <iostream>
#include ".\scope2.cpp"
using namespace std;  // para poder usar el cout

int count;
extern void write_extern(); // Se indica el extern

int main() {
    count = 5;
    write_extern();
    return 0;
}

