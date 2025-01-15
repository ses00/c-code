// example of without arguments and without return value

#include <stdio.h>


void printStars();

int main() {
    
    printStars();
    return 0;
}


void printStars() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 10; j >= 1; j--) {
            if(i>=j){
            printf("* ");
        }else{
            printf(" ");
        }
        }
            printf("\n");
    }

}
