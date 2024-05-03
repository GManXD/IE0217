#include <iostream>
#include <regex>

int main() {
    auto const regex = std::regex("(my|your) regex");

    auto const myText = "A piece of text that contains my regex.";
    bool myTextContainsRegex = std::regex_search(myText, regex);

    auto const yourText = "A piece of text that contains your regex.";
    bool yourTextContainsRegex = std::regex_search(yourText, regex);

    auto const theirText = "A piece of text that contains their regex.";
    bool theirTextContainsRegex = std::regex_search(theirText, regex);
    

    std::cout << std::boolalpha 
              << myTextContainsRegex << "\n"
              << yourTextContainsRegex << "\n"
              << theirTextContainsRegex << "\n";

    return 0;
}
