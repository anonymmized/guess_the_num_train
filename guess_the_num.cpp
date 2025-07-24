#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to game 'Guess The Number'!" << endl;
    cout << "I made a number from 1 to 100, try to guess" << endl;

    do {
        cout << "Enter the number: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too much! Try again" << endl;
        } else if (guess < secretNumber) {
            cout << "Too small number! Try again" << endl;
        } else {
            cout << "Congratulations, you guessed " << secretNumber << " for " << attempts << " attempts" << endl;

        }
    } while (guess != secretNumber);

    return 0;
}

