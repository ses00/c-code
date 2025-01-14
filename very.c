#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k=110;

    for(i=1;i<=k;i++){
        for(j=k;j>=1;j--){
        

            if(i>=j){

                printf("@ ");
            }

            else{
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
