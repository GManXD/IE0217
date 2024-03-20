#include <iostream>
using namespace std;

// enumerador week
enum week {Sunday, Monday, Tuestady, Wednesday, Thursday, Friday, Saturday};

int main() {
    week today;  // Variable tipo week
    today =  Wednesday;     // Asignando valor a today que es una variable tipo week
    cout << "Day " << today+1;

    return 0;
}