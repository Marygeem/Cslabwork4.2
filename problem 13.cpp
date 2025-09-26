#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter a traffic light letter, g,y,r: ";
    cin >> light;
    if (light == 'g') {
        cout << "Go"<< endl;
    }
    else if (light == 'y') {
        cout << "Get ready"<< endl;
    }
    else if  (light == 'r') {
        cout << "Stop"<< endl;
    }
    return 0;
}