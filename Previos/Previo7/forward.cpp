#include <iostream>
#include <forward_list>

using namespace std;

int main() {

    forward_list<int> nums = {1,2,3,4};

    // Inicializar iterador que apunta al inicio de la forward_list
    forward_list<int>::iterator itr = nums.begin();
    
    while(itr != nums.end()){
        // Acceder al valor del iterador

        int originalValue = *itr;

        // Asignar nuevo valor
        *itr = originalValue*2;
        // aumentar iterador
        itr ++;
    }

    // Imprimir contenidos de la forward_list
    for (int num : nums){
        cout << num << ", ";
    }

    return 0;
}
