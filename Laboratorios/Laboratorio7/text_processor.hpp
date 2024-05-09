#ifndef TEXt_PROCESSOR_HPP
#define TEXt_PROCESSOR_HPP

#include <string>


class TextProcessor {
    private:
        std::string input_filename;
        std::string output_filename;

    public:
        TextProcessor(const std::string& input_filename, const std::string& output_filename);
        void replace(const std::string& search_pattern, const std::string& replace_pattern);
};


#endif //TEXt_PROCESSOR_HPP