#include <iostream>
using namespace std;

// Crear clase
class Student{
    private:    // Acceso privado
        int age;

    public:     // Acceso publico

        //Constructor que inicializa age en 12
        Student() : age(12) {}

        void getAge(){
            // Metodo que imprime la edad
            cout << "Age = " << age << endl;
        }
};


int main(){
    // Declarar de forma dinamica puntero objeto Student
    Student *ptr = new Student();

    // Llamar el metodo getAge()
    ptr->getAge();

    // Liberar memoria
    delete ptr;

    return 0;
}