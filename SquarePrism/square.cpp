#include<stdio.h>


int main()
{
    int loop;
    int i;
    int j;
    printf("Enter Size : ");
    scanf_s("%d", &loop);
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
        for (j = 0; j <=(loop-i-1)*2+1; j++) {
            printf(" ");
        }       
        for (j = 1; j <=i; j++) {
            printf("*");
        }
            printf("\n");
        }


 
        return 0;
 }



