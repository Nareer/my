/*
	* ROT13
*/
#include <stdio.h>
#include <string.h>

int main(void){
	char in[20], out[20];
	int i, len;
	printf("Please enter text fo code ROT13 : ");
	scanf("%s", in);
	len = strlen(in);
// write here
	for(i = 0; i < len; i++){
		if(in[i] >= 65 && in[i] < 78){
			out[i] = in[i]+ 13;
		} else if (in[i] >= 78 && in[i] < 91){
			out[i] = in[i] - 13;
		}
	}
	for(i = 0; i < len; i++){
		printf("%c", out[i]);
	}
	return 0 ;	
}
