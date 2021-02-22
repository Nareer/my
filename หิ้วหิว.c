#include<stdio.h>

int main(void){
	int number = 123 ;
	int reverse = 0;
	while(number > 0){
		reverse = number %10;
		number = number /10 ;
		printf("%d", reverse);
	}
	return 0;
}
