#include <iostream>
using namespace std;

class Fraccion{
    int numerador, denominador;
    public:
        // Se asignan los valores en el constructor
        Fraccion(int n, int d) : numerador(n), denominador(d){}
        
        // operador "+" que devuelve un objeto tipo Fraccion
        // y utiliza otro objeto de parametro por referencia
        Fraccion operator+ (const Fraccion &f){
            // Devuelve la suma de 2 objetos tipo fraccion (suma de fracciones)
            Fraccion resultado(
                numerador*f.denominador + f.numerador*denominador, // Numerador de la suma de fracciones
                denominador * f.denominador // denominador de la suma de fracciones
            );
            return resultado;
        }

        void imprimir() {
            // Muestra la fraccion (numerador / denominador)
            cout << numerador << "/" << denominador << endl;
        }
};

int main(){
    // Se creann los objetos f1, f2 de clase Fraccion
    Fraccion f1(1,2);
    Fraccion f2(3,4);

    // Se utiliza el operador que se definio en la clase para crear el objeto f3
    Fraccion f3 = f1 + f2;

    // Metodo que muestra la fraccion
    f3.imprimir();

    return 0;
}