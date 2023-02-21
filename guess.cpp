#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generateSecretNumber();
int getPlayerGuess();
void printAnswer(int guess, int secretNumber);
int main( int argc, char* argv[]) {
    srand(time(0));
    int secretNumber = generateSecretNumber();
    int guess;
    do {
    guess = getPlayerGuess();
    printAnswer(guess, secretNumber);
    } while (guess != secretNumber);
    cout<<"Congratulations! You win!!!";
    return 0;
}
int generateSecretNumber() {
    int secretNumber = rand() % 100 + 1;
    return secretNumber;
}
int getPlayerGuess() {
    int guess;
    cout<<"Enter your guess (1..100) ";
    cin>>guess;
    if (!cin.good()) exit(1);
    return guess;
}
void printAnswer(int guess, int secretNumber) {
    if (guess < secretNumber) {
        cout<<"Your number is too small.\n";
    }
    else if (guess > secretNumber) {
        cout<<"Your number is too big.\n";
    }
}
