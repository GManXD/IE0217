#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Inicializar un vector de tipo string
    vector<string> languages = {"Python", "C++", "Java"};

    // Crear un iterador a un vector string
    vector<string>::iterator itr;


    // Iterar sobre todos los elementos
    for(itr = languages.begin(); itr != languages.end(); itr++){
        cout << *itr << ", ";

    }

    return 0;
}
