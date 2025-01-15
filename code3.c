//example of without arguments and with return value
#include<stdio.h>

int sum(int a, int b);

void printstar(int n){

    for (int i = 0;i<n;i++){

        printf("%c",'*');
    }
}

int takenumber(){
    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    return i;
}

int main(int argc, char const *argv[])
{
    int a,b,c;

    c= takenumber();
    printf("The entered number is %d\n",c);
    return 0;
}
