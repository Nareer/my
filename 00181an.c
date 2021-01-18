/*
	* ROT13
*/
#include <stdio.h>
#include <string.h>

int main(void){
	cher in[20], out[20];
	int i, len;
	printf("Please enter text fo code ROT13 : ");
	scanf("%s", in);
	len = strlen(in);
// write here
	
	for(i = 0; i < len; i++){
		printf("%c", out[i]);
	
	}
	return 0 ;	
}
