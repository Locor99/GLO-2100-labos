#include <iostream>
#include <unordered_map>
#include <string>

std::unordered_map<char, int> CountCharacters(const std::string& input) {
    std::unordered_map<char, int> charCount;

    for (char c : input) {
        charCount[c]++;
    }

    return charCount;
}

void PrintCharacterCounts(const std::unordered_map<char, int>& charCount) {
    for (const auto& pair : charCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    while (true) {
        std::string input;
        std::cout << "Enter a string: ";
        std::cin >> input;

        std::unordered_map<char, int> charCount = CountCharacters(input);
        PrintCharacterCounts(charCount);
    }

    return 0;
}
