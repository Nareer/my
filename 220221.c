#include <stdio.h>

int main(void){
	float point ;
	int i , count = 0 ;
	for(i = 0; i < 10 ; i++){
		scanf("%f", point);
	if (point > 60 ){
		printf("PASS\n");
		count = count+1; 
	}
	 
	} 
	printf("PASS = %d \n" , count);
		return 0 ;
}
