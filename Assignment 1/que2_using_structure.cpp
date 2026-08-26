#include <iostream>
using namespace std;

struct DateStruct {
    int day;
    int month;
    int year;

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

class DateClass {
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
    DateStruct ds;
    DateClass dc;
    
    ds.initDate();
    dc.initDate();

    int choice;
    do {
        cout << "\n=== DATE OPERATIONS MENU ===" << endl;
        cout << "1. Accept Date (Structure)" << endl;
        cout << "2. Print Date (Structure)" << endl;
        cout << "3. Check Leap Year (Structure)" << endl;
        cout << "4. Accept Date (Class)" << endl;
        cout << "5. Print Date (Class)" << endl;
        cout << "6. Check Leap Year (Class)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ds.acceptDateFromConsole();
                break;
            case 2:
                cout << "Structure Date: ";
                ds.printDateOnConsole();
                break;
            case 3:
                if (ds.isLeapYear()) {
                    cout << "Structure Year is a Leap Year." << endl;
                } else {
                    cout << "Structure Year is NOT a Leap Year." << endl;
                }
                break;
            case 4:
                dc.acceptDateFromConsole();
                break;
            case 5:
                cout << "Class Date: ";
                dc.printDateOnConsole();
                break;
            case 6:
                if (dc.isLeapYear()) {
                    cout << "Class Year is a Leap Year." << endl;
                } else {
                    cout << "Class Year is NOT a Leap Year." << endl;
                }
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}