#include<stdio.h>

int main(void){
	int base10, base2[16];
	int i = 0, j, r;
	printf("Enter base 10 :");
	scanf("%d", &base10);
	while (base10 > 0){
		r = (base10 % 2);
		base2[i] = r;
		base10 = base10 /2;
		i++;
	}
	for(j = i -1 ; j >= 0; j--){
		printf("%d", base2[j]);
	}
	return 0 ;
}
