// Created by: Shem
// Created on: 10/19/2025
// This program is a guessing game with a random number
#include <iostream>
#include <random>  // Needed for random number generation

int main() {
    // Create random number generator
    std::random_device rssed;                       // Seed
    std::mt19937 rgen(rssed());                     // Mersenne Twister engine
    std::uniform_int_distribution<int> dist(0, 5);  // Range 0-9

    // Generate random number
    int answer = dist(rgen);

    // Ask user for their guess
    int guess_number;
    std::cout << "Guess a number between 0 and 5: ";
    std::cin >> guess_number;

    // Check the guess
    if (guess_number == answer) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct answer was: " << answer << std::endl;
    }

}
