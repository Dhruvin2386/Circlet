#include <stdio.h>
int main()
{
    int s=45;

    for(int i=0; i<5; i++){
		for(int j=0;j<=i;j++){
			printf("%d",s+j);
		}
		printf("\n");
	}

    return 0;
}