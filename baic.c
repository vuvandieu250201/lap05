#include <stdio.h>
#include <stdlib.h>

int main2(void){
	int year;
	printf("enter the a year");
	scanf("%d", &year);
	if((year%4==0)&&(year%400==0)){
		printf("%d year",year);
	}
}
