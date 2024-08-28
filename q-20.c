#include <stdio.h>
int main()
{

    for(int i=1;i<=4;i++){
		
		for(int j=i;j<=4;j++){
			
			if(j==4){
				
				printf("*");
			}
			else{
				printf("  ");
			}
		}
		for(int k=1;k<=i;k++){
			
			printf(" ");
		}
		for(int k=2;k<=i;k++){
			
			printf(" ");
		}
		for(int j=i;j>=2;j--){
			if(j==2){
				
				printf("*");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

    return 0;
}