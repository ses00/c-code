
#include <stdio.h>

void checkNumber(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}


int main() {
    int number = -5;
    checkNumber(number);
    return 0;
}