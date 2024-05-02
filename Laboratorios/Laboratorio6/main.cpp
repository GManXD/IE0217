#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
    public:
        // Constructor de clase
        Statistics(const std::vector<T>& data) : data(data){
            if (data.empty()){  // Caso que este vacio
                // Lanzar excepcion que y salta a la linea de codigo donde esta el catch()
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        double mean() const {
            // Calcula la media
            T sum = 0;
            for (const T& value : data){
                sum += value;
            }
            return static_cast<double>(sum) / data.size();  // Castea sum a double y retorna la media
        }

        double standardDeviation() const {
            // Calcula la desviacion estandar
            double meanValue = mean();
            double sumSquares = 0;

            for(const T& value : data){
                // Calcular la suma de los cuadrados
                sumSquares += (value - meanValue)*(value - meanValue);
            }

            return std::sqrt(sumSquares / data.size());  // Desviacion estandar
        }
    
    private:  // Acceso privado
        std::vector<T> data;
};

int main(){
    try{
        std::vector<int> intData = {1, 2, 3, 4, 5};
        // Utilizar la plantilla con dato int
        Statistics<int> statsInt(intData);

        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;
        
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        // Utilizar la plantilla con dato double
        Statistics<double> statsDouble(doubleData);

        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviacion estandar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData);  // Salta un error que atrapa el catch()

    } catch(const std::invalid_argument& e){  // Catch de tipo invalid_argument
        // Salida de error estandar
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;

    }

    return 0;
}