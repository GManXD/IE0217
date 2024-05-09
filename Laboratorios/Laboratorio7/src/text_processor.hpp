#ifndef TEXt_PROCESSOR_HPP
#define TEXt_PROCESSOR_HPP

#include <string>


class TextProcessor {
    private:
        std::string input_filename; //Archivo de entrada
        std::string output_filename;    // Archivo de salida con palabras reemplazadas

    public:
        TextProcessor(const std::string& input_filename, const std::string& output_filename); // Constructor
        void replace(const std::string& search_pattern, const std::string& replace_string);   // Reemplaza las palabras del patron de busqueda
};


#endif //TEXt_PROCESSOR_HPP