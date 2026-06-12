#include<stdio.h>

int main()
{
    int i, j, rows = 6;

    for(i = 0; i < rows; i++)
    {

        for(j = i; j < rows; j++)
        {
            printf(" ");
        }

        int coef = 1;
        for(j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
