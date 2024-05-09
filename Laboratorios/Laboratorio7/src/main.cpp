#include <iostream>
#include "text_processor.hpp"

int main(int argc, char* argv[]){
    if(argc <  5){
        // Caso de que no se proporcione la cantidad de argumentos adecuada
        std::cerr << "Usage: " << argv[0] << "-f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n";   
    }

    std::string filename = argv[2];     // Nombre del archivo de entrada
    std::string outputfile = argv[4];      // Nombre de como se llamará el archivo de salida
    std::string search_pattern = argv[6];   // Patron de busqueda
    std::string replace_string = argv[8];      // Palabra por la cual será replazada

    TextProcessor processor(filename, outputfile);  
    processor.replace(search_pattern, replace_string);  // Reemplazar las palabras del patron de busqueda


    return 0;
}