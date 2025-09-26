#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int generated = rand() % 90 + 10;
    int guess;

    cout << "Enter your prediction (two-digit number): ";
    cin >> guess;

    int genTens  = generated / 10;
    int genOnes  = generated % 10;
    int guessTens = guess / 10;
    int guessOnes = guess % 10;

    cout << "The generated number was: " << generated << endl;

    if (guess == generated) {
        cout << "Accuracy: 100%" << endl;
    }
    else if ((guessTens == genTens) || (guessTens == genOnes) ||
             (guessOnes == genTens) || (guessOnes == genOnes)) {
        cout << "Accuracy: 50%" << endl;
             }
    else {
        cout << "Accuracy: 0%" << endl;
    }

    return 0;
}
