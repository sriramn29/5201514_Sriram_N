// Program to print the name of the day for the corresponding day number of the week.

#include <stdio.h>

int main () {
    int dayNumber = 0, flag = 0; // Initializing the variables. By default the flag is set to 0.
    printf ("Enter any number between 1 to 7: ");
    do {
        scanf ("%d", &dayNumber);
        switch (dayNumber) {
        case 1:
            printf("The Day of the week for the number %d is Monday", dayNumber);
            flag = 0;
            break;
        case 2:
            printf("The Day of the week for the number %d is Tuesday", dayNumber);
            flag = 0;
            break;
        case 3:
            printf("The Day of the week for the number %d is Wednesday", dayNumber);
            flag = 0;
            break;
        case 4:
            printf("The Day of the week for the number %d is Thursday", dayNumber);
            flag = 0;
            break;
        case 5:
            printf("The Day of the week for the number %d is Friday", dayNumber);
            flag = 0;
            break;
        case 6:
            printf("The Day of the week for the number %d is Saturday", dayNumber);
            flag = 0;
            break;
        case 7:
            printf("The Day of the week for the number %d is Sunday", dayNumber);
            flag = 0;
            break;
        default:
            printf("Sorry, Invalid Number!!\nPlease enter a valid number(1 to 7): "); // Indication or Output to the user to re-enter the value when number is not between 1 to 7 ie., flag = 1.
            flag = 1;
        }
    } while (flag == 1); // It repeats the loop until the value is between 1 to 7 ie., the flag is set to 0. If the number is out of range, then the flag is set to 1 & it repeat the looping cycle.
    
    return 0;
    
}