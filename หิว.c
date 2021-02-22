#include<stdio.h>

int main(void){
	int i;
	int student[10] = {8, 5, 6, 7, 1, 3, 2, 10, 9, 4};
	int min = student[0];
	for(i = 0; i < 10 ; i++){
		if (min > student[i]){
			min = student[i];
		}
	   
    }
    printf("min = %d", min);
	return 0;
}
