#include <iostream>
using namespace std;

class Student {
    // Clase que contiene las marcas 1 y 2 de un estudiante
    public:  // acceso publico
        double marks1, marks2;

};

Student createStudent(){
    // Funcion que retorna un objeto tipo Student
    Student student;  // Instanciacion de objeto student tipo Student

    student.marks1 = 96.5;
    student.marks2 = 75.0;
    
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 1 = " << student.marks2 << endl;

    return student;
    
}

int main(){
    Student student1;  // Instanciacion de objeto student1 tipo Student
    
    student1 = createStudent();  // Se asignan los valores por medio de la funcion

    return 0;
}