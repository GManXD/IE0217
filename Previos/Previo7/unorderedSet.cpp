#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    // Inicializar un unordered_set de tipo int
    unordered_set<int> numbers = {1,100,10,70,100};

    // Imprimir el set
    cout << "Numbers are: ";
    for (auto &num: numbers){
        cout << num << ", ";
    }

    return 0;
}
