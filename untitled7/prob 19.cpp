#include <iostream>
using namespace std;

int main() {
    double w;
    cout << "Enter the weight of the package (kg): ";
    cin >> w;

    if (w <= 0)
        cout << "Invalid input." << endl;
    else if (w <= 1)
        cout << "Shipping cost: 3500 som" << endl;
    else if (w <= 3)
        cout << "Shipping cost: 5500 som" << endl;
    else if (w <= 10)
        cout << "Shipping cost: 8500 som" << endl;
    else if (w <= 20)
        cout << "Shipping cost: 10500 som" << endl;
    else
        cout << "The package cannot be shipped." << endl;

    return 0;
}