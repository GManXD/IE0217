#include <iostream>
#include <cstring>

using namespace std;

struct Person {
    char name[50];
    int age;
    float salary;

};


int main() {
    Person p1;

    cout << "Ingrese el nombre completo";
    cin.get(p1.name, 50);
    cout << "Ingrese la edad";
    cin >> p1.age;
    cout << "Ingrese el salario: ";
    cin >> p1.salary;

    cout << "\nDesplegar informacion." << endl;
    cout << "Nombre: " << p1.name << endl;
    cout << "Edad: " << p1.age << endl;
    cout << "Salario: " << p1.salary << endl;
    
    return 0;
}