#include <iostream>
#include <map>

using namespace std;

int main() {

    // Inicializar un map
    map<int, string> student;  // LLave tipo int y valor tipo string
    // Usar los [] para añadir ekementos
    student[1] = "Jackeline" ;
    student[2] = "Blake" ;

    // Usar insert() para añadir elementos
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));


    // Añadir elementos con llaves duplicadas
    student[5] = "Timothy";
    student[5] = "Aaron";


    // Imprimir el map

    for (int i = 1 ; i<= student.size(); ++i){
        cout << "Student[" << i << "]: " << student[i] << endl;

    }

    return 0;
}
