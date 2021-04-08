#include <iostream>
#include <string>

#include "linenoise.hpp"

std::string READ(std::string input) { return input; }

std::string EVAL(std::string input) { return input; }

std::string PRINT(std::string input) { return input; }

std::string rep(std::string input) {
    auto ast = READ(input);
    auto result = EVAL(ast);
    auto output = PRINT(result);
    return output;
}

int main() {

    const auto history_path = "history.txt";
    linenoise::LoadHistory(history_path);
    
    std::string input;
    while (true) {
        auto quit = linenoise::Readline("hello> ", input);
        if (quit)
            break;
        std::cout << rep(input) << std::endl;
        linenoise::AddHistory(input.c_str());
    }
    linenoise::SaveHistory(history_path);

    return 0;
}
