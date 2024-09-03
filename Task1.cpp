#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0))); 
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int numberOfTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        numberOfTries++;

        if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << numberOfTries << " tries." << endl;
        }
    } while (guess != numberToGuess);

    return 0;
}
