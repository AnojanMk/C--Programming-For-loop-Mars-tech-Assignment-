#include<stdio.h>

int main()
{
    int i,j;
    int rows = 69;


    for( i = 65 ; i <= rows ; i++)
    {

        for( j = 65 ; j <= i ; j++)
        {
                printf("%c", i);

        }

        printf("\n");
    }
    return 0 ;
}
