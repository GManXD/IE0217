#include <iostream>
using namespace std;

class Student {
    // Contiene las markas de un estudiante
    public:  // Tipo de acceso publico
        double marks;

        Student(double m){  // Constructor
            marks = m;
        }
};

void calculateAverage(Student s1, Student s2){
    // Calcula el promedio de las markas de 2 estudiantes y la imprime
    double average = (s1.marks + s2.marks) / 2;

    cout << "Average Marks = " << average << endl;

}

int main(){
    Student student1(88.0), student2(56.0);  // Instanciacion de 2 objetios tipo Student
    // Llamar la funcion calculateAverage
    calculateAverage(student1, student2);

    return 0;
}