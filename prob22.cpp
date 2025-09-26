#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand();

    char guess;
    cout << "Guess whether the number is even or odd (e/o): ";
    cin >> guess;

    cout << "The generated number is: " << number << endl;

    bool isEven = (number % 2 == 0);

    switch (guess) {
        case 'e':
        case 'E':
            if (isEven)
                cout << "Correct! It is even." << endl;
            else
                cout << "Incorrect. It is odd." << endl;
            break;
        case 'o':
        case 'O':
            if (!isEven)
                cout << "Correct! It is odd." << endl;
            else
                cout << "Incorrect. It is even." << endl;
            break;
        default:
            cout << "Invalid input! Please enter 'e' for even or 'o' for odd." << endl;
    }

    return 0;
}