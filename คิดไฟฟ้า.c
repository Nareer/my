#include <stdio.h>

float cal (int n);

int main(void){
	int i, n;
	float ans;
	printf("(1) Voltage (2) Current (3) Resistance\n");
	printf("enter : ");
	scanf("%d", &n);\
	ans = cal(n);
	printf("Answer is %f", ans);
	return 0;
	
}

float cal (int n){
	float result = 0.0 ;
	float v, i, r ;
	if (n == 1){
		printf("V = ?\n ");
		scanf("%f" , &v);
		printf("R = ?\n");
		scanf("%f", &r);
		result = i * r;
		
	}
	
	if (n == 2){
		printf("V = ?\n ");
		scanf("%f" , &v);
		printf("R = ?\n");
		scanf("%f", &r);
		result = v / r;
		
	}	
	
	if (n == 3){
		printf("V = ?\n ");
		scanf("%f" , &v);
		printf("I = ?\n");
		scanf("%f" , &i);
		result = v / i;
		
	}	
	return result;
}
