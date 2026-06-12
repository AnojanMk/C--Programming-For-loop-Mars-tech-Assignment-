#include<stdio.h>

int main()
{
    int i,j;
    int rows = 1;

    for( i = 5 ; rows <= i ; i--)
    {

        for( j = 1 ; j <= i ; j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }
    return 0 ;
}
