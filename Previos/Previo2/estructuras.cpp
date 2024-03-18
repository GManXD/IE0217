#include <iostream>
#include <cstring>

using namespace std;

// Creando la estructura Person
struct Person {
    char name[50];  // Propiedad nombre
    int age;        // Propiedad edad
    float salary;   // Propiedad salario

};


int main() {
    Person p1;  // Creando la persona p1

    cout << "Ingrese el nombre completo";
    cin.get(p1.name, 50);   // Guardar el nombre en la propiedad name de p1
    cout << "Ingrese la edad";
    cin >> p1.age;          // Guardar la edad en la propiedad age de p1
    cout << "Ingrese el salario: ";
    cin >> p1.salary;       // Guardar el salario en la propiedad salary de p1

    cout << "\nDesplegar informacion." << endl;
    cout << "Nombre: " << p1.name << endl;
    cout << "Edad: " << p1.age << endl;
    cout << "Salario: " << p1.salary << endl;
    
    return 0;
}