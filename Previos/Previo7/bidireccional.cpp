#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> nums = {1,2,3,4,5};

    // Inicializar iterador que apunta al inicio de list
    list<int>::iterator itr = nums.begin();
    
    cout << "Moving forward: " << endl;

    // Imprimir elementos en orden ascendente
    while(itr != nums.end()){
        // Acceder al valor 
        cout << *itr << ", ";
        // aumentar iterador
        itr ++;
    }

    
    cout << endl << "Moving backward: " << endl;

    // Imprimir elementos en orden descendente
    while(itr != nums.begin()){
        if (itr != nums.end()){
            // Acceder al valor 
            cout << *itr << ", ";
        }
        
        
        // disminuir iterador
        itr --;
    }

    // Se imprime el primer elemento, que se excluyó en el while
    cout << *itr << endl;

    return 0;
}
