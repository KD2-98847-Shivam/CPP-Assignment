#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole() {
        cout << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }
};

int main() {
    Date d;
    d.initDate();

    int choice;
    do {
        cout << "\n=== DATE MENU ===" << endl;
        cout << "1. Initialize Default Date" << endl;
        cout << "2. Accept Date from Console" << endl;
        cout << "3. Print Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                d.initDate();
                cout << "Date initialized to default (1/1/2000)." << endl;
                break;
            case 2:
                d.acceptDateFromConsole();
                break;
            case 3:
                cout << "Current Date: ";
                d.printDateOnConsole();
                break;
            case 4:
                if (d.isLeapYear()) {
                    cout << "The year is a Leap Year." << endl;
                } else {
                    cout << "The year is NOT a Leap Year." << endl;
                }
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}