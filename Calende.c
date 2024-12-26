#include <stdio.h>

int main() {
    int Year, Month, Day, DaysInMonth, WeekDay = 0, StartingDay;
    char *Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int DaysInMonthArray[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter year: ");
    scanf("%d", &Year);

    printf("Enter month (1-12): ");
    scanf("%d", &Month);

    // Calculate leap year
    if (Year % 4 == 0) {
        if (Year % 100 == 0) {
            if (Year % 400 == 0) {
                DaysInMonthArray[1] = 29; // Leap year
            }
        } else {
            DaysInMonthArray[1] = 29; // Leap year
        }
    }

    // Calculate starting day of the month
    for (int i = 1900; i < Year; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    WeekDay += 2;
                } else {
                    WeekDay += 1;
                }
            } else {
                WeekDay += 2;
            }
        } else {
            WeekDay += 1;
        }
        WeekDay %= 7;
    }

    for (int i = 1; i < Month; i++) {
        WeekDay += DaysInMonthArray[i - 1];
        WeekDay %= 7;
    }

    StartingDay = WeekDay;

    // Print calendar header
    printf("\n     %s %d\n", Months[Month - 1], Year);
    printf("-----------------------------\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Print calendar body
    for (int i = 0; i < StartingDay; i++) {
        printf("    ");    
    }

    DaysInMonth = DaysInMonthArray[Month - 1];
    for (Day = 1; Day <= DaysInMonth; Day++) {
        printf("%4d", Day);
        if (++WeekDay % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n\n");

    return 0;
}