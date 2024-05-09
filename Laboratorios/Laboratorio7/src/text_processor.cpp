#include "text_processor.hpp"
#include <fstream>
#include <regex>

TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    // Constructor
    : input_filename(input_filename), output_filename(output_filename){}


void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string){
    std::ifstream input_file(input_filename);   // Archivo de entrada
    std::ofstream output_file(output_filename); // archivo de salida
    std::string line;

    std::regex pattern(search_pattern);

    if(input_file && output_file){  // Verificar si se abrieron los archivos
        while(getline(input_file, line)){       // Lee cada linea del archivo
            std::string replaced = std::regex_replace(line, pattern, replace_string);   // Cadena reemplazada con el patron de busqueda
            output_file << replaced << "\n";
        }
    }
}