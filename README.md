# Bulls and Cows

A small command-line number guessing game written in C++. Try to guess a randomly generated sequence of four different digits, each from 1 to 9.

## How to play

1. Run the program.
2. Enter four numbers, one at a time. You can type them on separate lines or separate them with spaces.
3. After each guess, the game reports:
   - **Bulls** — a digit is correct and in the correct position.
   - **Cows** — a digit is in the sequence but in a different position.
4. Keep guessing until you get four bulls.

The game does not currently limit the number of guesses.

## Build and run

You need a C++ compiler, such as `g++`.

### Windows (with MinGW-w64)

From the folder containing the source file, run:

```powershell
g++ -std=c++11 bulls_and_cows.cpp -o bulls_and_cows.exe
.\bulls_and_cows.exe