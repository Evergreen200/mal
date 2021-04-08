#include <iostream>
#include <string>

std::string READ(std::string input) { return input; }

std::string EVAL(std::string input) { return input; }

std::string PRINT(std::string input) { return input; }

std::string rep(std::string input) {
    auto read = READ(input);
    auto result = EVAL(read);
    auto output = PRINT(result);
    return output;
}

int main() {

    while (true) {

        std::cout << "user> ";
        std::string input;
        if (!std::getline(std::cin, input))
            break;
        std::cout << rep(input) << std::endl;
    }

    return 0;
}
