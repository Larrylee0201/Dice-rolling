#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Use time as seed for randomization to ensure randomness in each game
    srand(time(0));

    // Welcome message
    std::cout << "Welcome to the Dice Rolling Game!" << std::endl;

    char choice;
    do {
        // Roll the dice
        int dice = rand() % 6 + 1; // Generate a random number between 1 and 6

        // Display the result
        std::cout << "You rolled: " << dice << std::endl;

        // Ask if the player wants to continue
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Game Over!" << std::endl;

    return 0;
}
