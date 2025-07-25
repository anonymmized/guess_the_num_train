#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "\033[35mWelcome to game 'Guess The Number'!\033[0m" << endl;
    cout << "\033[35mI made a number from 1 to 100, try to guess\033[0m" << endl;

    do {
        while (!(cin >> guess) || guess < 1 || guess > 100) {
            cout << "\033[31mInvalid input! Please enter a number between 1 and 100: \033[0m";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        attempts++;

        if (guess > secretNumber) {
            cout << "\033[31mToo much! Try again\033[0m" << endl;
        } 
        else if (guess < secretNumber) {
            cout << "\033[34mToo small number! Try again\033[0m" << endl;
        } 
        else {
            cout << "\033[32mCongratulations, you guessed " << secretNumber << " for " << attempts << " attempts\033[0m" << endl;

        }
    } while (guess != secretNumber);

    return 0;
}

