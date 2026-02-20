#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    const int length = 100000;
    std::string s;
    s.reserve(length);  // Reserve space to avoid reallocation

    // Initialize random seed
    std::srand(std::time(0));

    // Generate random lowercase letters
    for (int i = 0; i < length; ++i) {
        char randomChar = 'a' + (std::rand() % 26);
        s += randomChar;
    }

    // Print or use the string as needed
    std::cout << "Generated String of length 100,000:\n";
    std::cout << s << std::endl;

    return 0;
}

