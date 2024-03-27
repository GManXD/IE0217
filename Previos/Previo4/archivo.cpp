#include <iostream>
#include <fstream>

class Archivo {
    // Abre un archivo y lo cierra
    private:
        std::fstream archivo;

    public:
        Archivo(std::string nombre_archivo){
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            if (!archivo.is_open()) {  // Si no se pudo abrir
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;

            }
        }

        ~Archivo(){  // Destructor de clase
            if (archivo.is_open()){
                archivo.close();  // Cierra el archivo si está abierto
            }
        }
};

int main(){
    Archivo mi_archivo("datos.txt");  // Instanciacion del objeto mi_archivo de la clase Archivo

    // Lo que siga de codigo con respecto al archivo
}