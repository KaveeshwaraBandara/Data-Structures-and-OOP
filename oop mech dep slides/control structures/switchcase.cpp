#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int language;
    cout << "Language Options:\n";
    cout << "\t 1. Sinhala\n";
    cout << "\t 2. Tamil\n";
    cout << "\t 3. English\n";
    cout << "\t 4. French\n";
    cout << "\t 5. Spanish\n";
    do {
        cout << "\nPlease enter the language number to continue: \t";
        cin >> language;
        if ((language < 1) || (language > 5)) {
            cout << "\nIncorrect Choice";
        }
    } while ((language < 1) || (language > 5));
    switch (language) {
        case 1:
            cout << "You have chosen Sinhala language";
            break;
        case 2:
            cout << "You have chosen Tamil language";
            break;
        case 3:
            cout << "You have chosen English language";
            break;
        case 4:
            cout << "You have chosen French language";
            break;
        default:
            cout << "You have chosen Spanish language";
            break;
    }
    getch();
}