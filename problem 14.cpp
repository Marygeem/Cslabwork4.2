#include <iostream>
using namespace std;
int main() {
    int d; cin >> d;
    cout << (d==1?"Monday":d==2?"Tuesday":d==3?"Wednesday"
            :d==4?"Thursday":d==5?"Friday":d==6?"Saturday":
             d==7?"Sunday":"Invalid day");}