#include <iostream>
using namespace std;

class Molde {
    // Contiene las propiedades de largo, ancho y altura del objeto
    // Calcula el area y el Volumen del objeto

    public:
        double largo;
        double ancho;
        double alto;
        // Se asignan los valores de largo, ancho y alto en el constructor
        Molde(double largo_p, double ancho_p, double alto_p): largo(largo_p), ancho(ancho_p), alto(alto_p){  // Constructor de la clase
            // Se ejecuta al instanciar el objeto
            // Imprime un mensaje en pantalla que indica la instanciacion
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;

        }

        ~Molde(){  // Destrucctor de la clase

        }
    double calcularArea(){
        // Calcula el area del objeto
        return largo*ancho;

    }

    double calcularVolumen(){
        // Calcula el volumen del objeto
        return largo*ancho*alto;

    }
};

int main(){
    // Instanciar al objeto pared de la clase Molde
    Molde pared(400.5, 20.8, 315.2);  // Se asignan los valores de largo, ancho y altura como parametros

    // Asignar los valores al objeto en el caso de que no se pidan por el constructor:
    //pared.largo = 400.5;
    //pared.ancho = 20.8;
    //pared.altura = 315.2;

    // Calcular el volumen y area con los metodos de clase
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;  // Se va al destructor de la clase
}