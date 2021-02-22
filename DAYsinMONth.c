#include <stdio.h>
int main(void){
	int m, year ;
	int day_in_m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d" ,&m);
	scanf("%d" ,&year);
	year = year - 543 ;
	if((year %4 == 0 && year %100 != 0) || year %400 == 0 ){
		day_in_m[1] = 29;
	}
	printf("%d",day_in_m[m-1]);
	return 0;
	
}

