#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, input);

    // Manual method to reverse the string
    std::string reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i]; // Append characters in reverse order
    }

    std::cout << "Reversed string: " << reversed << std::endl;
    return 0;
}
