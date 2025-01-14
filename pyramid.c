#include<stdio.h>
int main(int argc, char const *argv[])
{
     int i,h,d=10;

     for(i=1;i<=d;i++){
        for(h=d;h>=1;h--){

            if(i>=h){

                printf("* ");
            }
            
               else{
              printf(" ");
          }
        }
        printf("\n");
     }
    return 0;
}
