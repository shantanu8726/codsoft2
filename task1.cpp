#include <iostream> // Required for input/output operations (cin, cout)
#include <cstdlib>  // Required for std::rand() and std::srand()
#include <ctime>    // Required for std::time() to seed the random number generator

int main() {
    // Seed the random number generator using the current time.
    // This ensures that a different sequence of random numbers is generated each time the program runs.
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100 (inclusive).
    // You can adjust the range by changing the '100' and '1' here.
    const int secretNumber = (std::rand() % 100) + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have generated a random number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

    // Loop until the user guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++; // Increment the attempt counter with each guess

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;
            std::cout << "It took you " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber); // Continue the loop as long as the guess is not equal to the secret number

    return 0; // Indicate successful program execution
}
