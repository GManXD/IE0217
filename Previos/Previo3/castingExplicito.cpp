#include <iostream>
using namespace std;

int main(){
    // Asignando un valor double
    double num_double = 3.56;
    cout << "num_double: " << num_double << endl;
    
    // C-style conversion de double a int
    int num_int1 = (int)num_double;
    cout << "num_int1: " << num_int1 << endl;

    // function-style conversion de doble a int
    int num_int2 = int(num_double);
    cout << "num_int2: " << num_int2 << endl;

    
    return 0;
}