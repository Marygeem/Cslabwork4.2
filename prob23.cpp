#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main() {
    srand(time(0));
    string ranks[13] = {"Ace", "2", "3", "4", "5", "6", "7",
                        "8", "9", "10", "Jack", "Queen", "King"};
    string suits[4]  = {"Clubs", "Diamonds", "Hearts", "Spades"};

    int rankIndex = rand() % 13;
    int suitIndex = rand() % 4;

    cout << "You picked the " << ranks[rankIndex]
         << " of " << suits[suitIndex] << "." << endl;

    return 0;
}