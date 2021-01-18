#include<stdio.h>
#include<string.h>

int main(void){
	int i, len = 0;
	char text[30] = "CHONKANYANUKOON SCHOOL";
	//loohcs nookunayanaknhc
	len = strlen(text);
	for(i = 0; len >= i; len--){
		printf("%c",text[len]);
	}
	return 0;
}
