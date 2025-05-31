#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void displayHangman(int tries) {
    const std::string hangmanStages[] = {
        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |     /|\\\n"
        "   |     / \\\n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |     /|\\\n"
        "   |     / \n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |     /|\\\n"
        "   |      \n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |     /|\n"
        "   |      \n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |      |\n"
        "   |      \n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      O\n"
        "   |      \n"
        "   |      \n"
        "   |\n"
        "  ===",

        "   --------\n"
        "   |      |\n"
        "   |      \n"
        "   |      \n"
        "   |      \n"
        "   |\n"
        "  ==="
    };

    std::cout << hangmanStages[6 - tries] << "\n\n";
}

int main() {
    std::vector<std::string> wordList = {"computer", "hangman", "programming", "game", "science"};
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::string word = wordList[std::rand() % wordList.size()];
    std::string guessedWord(word.length(), '_');
    int tries = 6;
    std::string guessedLetters;

    std::cout << "Welcome to Hangman!\n";

    while (tries > 0 && guessedWord != word) {
        displayHangman(tries);
        std::cout << "Word: " << guessedWord << "\n";
        std::cout << "Guessed letters: " << guessedLetters << "\n";
        std::cout << "Tries left: " << tries << "\n";

        char guess;
        std::cout << "Enter a letter: ";
        std::cin >> guess;
        guess = std::tolower(guess);

        if (!std::isalpha(guess)) {
            std::cout << "Please enter a valid letter.\n";
            continue;
        }

        if (guessedLetters.find(guess) != std::string::npos) {
            std::cout << "You already guessed that letter.\n";
            continue;
        }

        guessedLetters += guess;

        if (word.find(guess) != std::string::npos) {
            for (size_t i = 0; i < word.length(); ++i) {
                if (word[i] == guess) {
                    guessedWord[i] = guess;
                }
            }
            std::cout << "Correct!\n";
        } else {
            --tries;
            std::cout << "Wrong guess!\n";
        }

        std::cout << "----------------------------------\n";
    }

    if (guessedWord == word) {
        std::cout << "Congratulations! You guessed the word: " << word << "\n";
    } else {
        displayHangman(0);
        std::cout << "You lost. The word was: " << word << "\n";
    }

    return 0;
}
