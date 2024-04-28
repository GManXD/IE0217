#include <iostream>
using namespace std;

// Plantilla de clase de multiples parametros
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1;
    U var2;
    V var3;

public:
    // Constructor
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

    void printVar() {
        // Metodo que imprime var1, var2 y var3
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // Crear objeto con parametros int, double y char
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // Crear objeto con parametros double, char y bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}
