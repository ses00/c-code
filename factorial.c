#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    


      int  factorial =1,i, j;

        printf("Enter your number = ");

        scanf("%d",&i);

        for(j=1; j<=i;j++){

          factorial *=j;
          
    }

 printf("The factorial of %d is %d",i,factorial);

    return 0;
}
