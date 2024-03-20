#include <iostream>
using namespace std;

// Enumerador suit
enum suit {
    // Posibles valores para las variables tipo suit
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;  // Declarando variable "card" tipo suit
int main(){
    card = club;  // Asignando valor a la variable "card"
    // Tamaño de la variable card
    cout << "Size of enum variable " << sizeof(card) << " bytes";
    return 0;
}