#include <stdio.h>
int main()
{
    for (int i = 5; i >=1 ; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        for (int j = i+1; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    

    return 0;
}