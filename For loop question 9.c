#include<stdio.h>

int main()
{
    int i, j, k, rows = 5;

    for(i = 1; i <= rows; i++)
    {

        for(j = i; j < rows; j++)
        {
            printf(" ");
        }


        for(k = i; k <= (2 * i - 1); k++)
        {
            printf("%d", k);
        }


        for(k = (2 * i - 2); k >= i; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
