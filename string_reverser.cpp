#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, input);
    std::reverse(input.begin(), input.end());
    std::cout << "Reversed string: " << input << std::endl;
    return 0;
}
