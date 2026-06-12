#include<stdio.h>

int main()
{
    int i, j, k, rows = 5;

    for(i = rows; i >= 1 ; i--)
    {

        for(j = i ; j < rows; j++)
        {
            printf(" ");
        }


        for(k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");

        }

        printf("\n");
    }

    return 0;
}
