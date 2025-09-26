#include <iostream>
using namespace std;

int main() {
    char lang;
    cout << "Choose a language (u=Uzbek, e=English, r=Russian, g=German): ";
    cin >> lang;

    switch (lang) {
        case 'u': cout << "Salom!" << endl; break;
        case 'e': cout << "Hello!" << endl; break;
        case 'r': cout << "Privet!" << endl; break;
        case 'g': cout << "Hallo!" << endl; break;
        default:  cout << "Invalid choice!" << endl;
    }

    return 0;
}