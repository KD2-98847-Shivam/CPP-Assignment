#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

int main() {
    struct Date d;
    int choice;

    initDate(&d);

    do {
        printf("\n=========== DATE MENU ===========\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date from Console\n");
        printf("3. Print Date on Console\n");
        printf("0. Exit\n");
        printf("=================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                initDate(&d);
                printf("Date reset to default.\n");
                break;
            case 2:
                acceptDateFromConsole(&d);
                printf("Date updated.\n");
                break;
            case 3:
                printDateOnConsole(&d);
                break;
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}

void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter Day: ");
    scanf("%d", &ptrDate->day);
    
    printf("Enter Month: ");
    scanf("%d", &ptrDate->month);
    
    printf("Enter Year: ");
    scanf("%d", &ptrDate->year);
}