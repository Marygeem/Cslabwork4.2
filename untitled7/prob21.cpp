#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    cout <<"Enter month number 1-12:";

    switch (month) {
        case 1:
            cout << "In January there is:\n"
                 << "– New Year, 1 January\n"
                 << "– Defenders of the Motherland Day, 14 January" << endl;
            break;
        case 2:
            cout << "In February, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 3:
            cout << "In March there is:\n"
                 << "– International Women’s Day, 8 March\n"
                 << "– Navruz, 21 March" << endl;
            break;
        case 4:
            cout << "In April, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 5:
            cout << "In May there is:\n"
                 << "– Day of Remembrance and Honour, 9 May" << endl;
            break;
        case 6:
            cout << "In June, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 7:
            cout << "In July, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 8:
            cout << "In August, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 9:
            cout << "In September there is:\n"
                 << "– Independence Day, 1 September\n"
                 << "– Teachers and Mentors Day, 1 October is coming soon" << endl;
            break;
        case 10:
            cout << "In October there is:\n"
                 << "– Teachers and Mentors Day, 1 October" << endl;
            break;
        case 11:
            cout << "In November, there are no fixed national holidays.\n"
                 << "Ramadan Hayit and Kurban Hayit may fall here but their dates change." << endl;
            break;
        case 12:
            cout << "In December there is:\n"
                 << "– Constitution Day, 8 December" << endl;
            break;
        default:
            cout << "Invalid month number! Please enter a value from 1 to 12." << endl;
    }

    return 0;
}