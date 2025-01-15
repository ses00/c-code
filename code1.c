// example of with argument and without return value
#include<stdio.h>

int sum(int a, int b);

void printstar( int n){
    for (int i = 0;i<n;i++){
        printf("%c",'*');
    }
}

int main(int argc, char const *argv[])
{
    int a,b,c;

    printstar(9);

    return 0;
}
