#include<stdio.h>


int main()
{
    int loop = 9;
    int i;
    int j;
    for (i = 1; i <= loop; i++)
    {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= loop - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= loop - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = loop - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        /*for (j = i; j >= 1; j--) {
            printf(" ");
        }
        for (j = i; j >= 1; j--) {
            printf(" ");
        }
        for (j = 1; j <= loop - i; j++) {
            printf("*");
        }*/
            printf("\n");
        }


        /* for(i = 1; i <= loop; i++)
         {
             for(j = 1; j <= loop-i; j++ ){
                 printf(" ");
             }

             for(j = 1; j <= i; j++){
                 printf("*");
             }

             printf("\n");
         }

         for(i = 1; i <= loop; i++)
         {
             for(j = i; j >= 1 ; j-- ){
                 printf(" ");
             }

             for(j = 1; j <= loop-i; j++){
                 printf("*", j);
             }

             printf("\n");

         }
        */
        return 0;
 }
