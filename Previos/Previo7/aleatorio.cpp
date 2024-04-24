#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Crear un vector
    vector<int> vec = {1,2,3,4};

    // Crear iteradores que apuntan al inicio y final de los elementos
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end()-1;
    
    // Imprimir elementos del vector
    cout << "First element: " << *itr_first << endl;
    cout << "Second element: " << itr_first[1] << endl;

    cout << "Second last element: " << *(itr_last-1) << endl;
    cout << "Last element: " << *(itr_last) << endl;    

    return 0;
}