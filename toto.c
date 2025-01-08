
#include <stdio.h>
#include <time.h>

int main() {
    int birthYear, currentYear, age;


    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    currentYear = tm.tm_year + 1900;


    printf("Enter your birth year: ");
    scanf("%d", &birthYear);


    if (birthYear > currentYear) {
        printf("Invalid birth year! Please enter a valid year.\n");
        return 1; // Exit with error
    }

    age = currentYear - birthYear;


    printf("Your age is: %d years\n", age);

    return 0;
}