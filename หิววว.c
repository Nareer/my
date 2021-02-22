#include<stdio.h>

int main(void){
	int i;
	int student[10] = {8, 5, 6, 7, 1, 3, 2, 10, 9, 4};
	int count = 0 ;
	for(i = 0; i < 10 ; i++){
		if (student[i] % 2 == 0){
			count++; // count += 1; count = count + 1;
		}
	   
    }
    printf("n of even = %d", count);
	return 0;
}
