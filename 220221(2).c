#include<stdio.h>

int main(void){
	float score ;
	int i, count = 0 ;
	for(i = 0; i < 10 ; i++){
		scanf("%f", &score); 
	if (score >= 60 ){
		printf("PASS\n");
	}else{
		printf("fALL\n");
		count = count+1; }
	  
    }
    printf("PASS = %d \n", count);
    
	return 0 ; 
}

