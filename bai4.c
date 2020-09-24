#include <stdio.h>

int main24(void){
	char c;
	printf("enter a character :");
	scanf ("%c", &c);
	if((c>'A')&&(c<'Z')){
		printf("lowercase character %c",c +'a'-'A' );
	}
	else
	printf("character enter = %c", c);
	return 0;
	
}
