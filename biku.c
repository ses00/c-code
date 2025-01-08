
#include<stdio.h>

int main() {
    int numbers[] = {2, 5, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int k = 0; k < size; k++) {
        int num = numbers[k];
        printf("Table of %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}