# Guess the Number

## Description

"Guess the Number" is a simple console-based game written in C++. The computer generates a random number between 1 and 100, and the player must guess it within 10 attempts. After each guess, the game provides hints (e.g., "Too high!" or "Too low!") in colored text to guide the player. The game includes input validation to ensure only valid numbers are accepted and displays the result (win or lose) with the number of attempts used.

## Features

- Random number generation between 1 and 100.
- Colorful output using ANSI escape codes (e.g., red for errors, blue for hints).
- Input validation to accept only numbers between 1 and 100.
- Limited to 10 attempts, with a "Game over" message if the player runs out of attempts.
- Displays remaining attempts after each guess.

## Requirements

- A C++ compiler (e.g., g++).
- A terminal that supports ANSI color codes (e.g., macOS Terminal, iTerm2).

## Installation and Running

### 1 Clone or download the project

### 2 Compile the program:
- Open a terminal and navigate to the folder containing the file.
- Run the following command:
```bash
g++ guess_the_number.cpp -o guess_the_number
```
### 3 Run the game:

- Execute the compiled program:
```bash
./guess_the_number
```

## How to Play

- The game starts with a welcome message and informs you that you have 10 attempts to guess a number between 1 and 100.
- Enter a number between 1 and 100 when prompted.
- The game will respond with:
    - Red text: If your input is invalid (e.g., letters or numbers outside 1–100).
    - Red hint: If your guess is too high.
    - Blue hint: If your guess is too low.
    - Green text: If you guess the number correctly, showing the number of attempts used.
- If you use all 10 attempts without guessing the number, the game ends and reveals the number.
- The prompt shows how many attempts are left after each guess.

## Example Output
```bash
Welcome to game 'Guess The Number'! (purple)
I made a number from 1 to 100, try to guess. You have 10 attempts! (purple)
Enter the number (1-100) [Attempts left: 10]: (orange) 50
Too much! Try again (red)
Enter the number (1-100) [Attempts left: 9]: (orange) 25
Too small number! Try again (blue)
Enter the number (1-100) [Attempts left: 8]: (orange) 42
Congratulations, you guessed 42 for 3 attempts (green)
```

## Technologies Used

- C++: Core programming language.
- Standard Libraries:
- iostream: For input/output operations.
- cstdlib: For random number generation (rand).
- ctime: For seeding the random number generator (srand(time(0))).
- ANSI Escape Codes: For colored text output in the terminal.

Anonymmized