// Created by: Shem
// Created on: 10/13/2025
// This program is a guessing game
// Copyright 2025 Shem
#include <iostream>

int main() {
    int answer = 30;
// Input
    int guess_number;
    std::cout << "Guess a number between 0 and 30: ";
    std::cin >> guess_number;
// Check guess
    if (guess_number == answer) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong"<< std::endl;
    }
}
