#include <stdio.h>
int main()
{

    for(int i=1; i<=5; i++){
        for(int j=i; j>=1; j--){
        	
            printf("%d ", j);
        }

        printf("\n");
        
       }
    for(int i=5; i>=1; i--)
    {
        for(int j=i-1; j>=1; j--){
        	
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}