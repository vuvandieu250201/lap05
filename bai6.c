#include <stdio.h>
#include <stdlib.h>

int main336(void){
	int x,y;
	printf("enter the choice (1-3)\n");
	scanf("%d", &x);
	if(x==1)
{
		printf("enter value y(1-5)\n");
		scanf("%d", &y);
		if(y<=5){
			printf("the value is %d\n", y);
		}
		else
		{
			printf("the value not 5\n");
		}
	}
	else
	printf("not 1\n");
		

	
	
}
