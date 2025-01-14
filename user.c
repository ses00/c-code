#include<stdio.h>;
int main(int argc, char const *argv[])
{
    int u,i,c=12;

    

        printf("enter your number\n");
        scanf("%d",&u);

        for(i=1;i<=c;i++){

            printf("%d * %d = %d\n",u,i,u*i);
        }

    
    return 0;
}
w