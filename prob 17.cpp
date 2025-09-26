#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    switch ((num > 0) - (num < 0)) {
        case 1:  cout << "The number is Positive." << endl; break;
        case -1: cout << "The number is Negative." << endl; break;
        case 0:  cout << "The number is Zero." << endl; break;
    }

    return 0;
}