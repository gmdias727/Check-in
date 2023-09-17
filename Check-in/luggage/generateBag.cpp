#include "generateBag.hpp"

char createChar() {
    int randomValue = std::rand() % 36;
    if (randomValue < 26) {
        return static_cast<char>(randomValue + 'A');
    }
    else {
        return static_cast<char>(randomValue - 26 + '0'); 
    }
}
std::string LuggageGenerator::generateHash(const std::string& nome, int idBagagem) {
    std::string chave;
    std::string input = nome + std::to_string(idBagagem);

    for (int i = 0; i < 16; i++) {
        if (i > 0 && i % 4 == 0) {
            chave += '-';
        }
        if (i < input.length()) {
            chave += std::toupper(input[i]);
        }
        else {
            chave += createChar();
        }
    }
    return chave;
}





