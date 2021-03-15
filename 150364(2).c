#include <stdio.h>
float score[20] = {};
int n = 0 ;

float cal( int n );
float avg();
float max();
float min();
int main(void){
	int i;
	scanf("%d",&n);
	printf("Total number of student = %d\n ",n);
	for(i = 0; i < n; i++){
		scanf("%f\n", &score[i]);
		while(score[i] < 0){
			printf("Number less than zero\n");
			scanf("%f\n", &score[i]);
		}
	} 
	printf("Average = %.2f Max = %.2f Min = %.2f \n ", cal(1), cal(2) , cal(3));
	//printf("max = %.2f\n", max());
	//printf("min= %.2f\n" , min());
	return 0;
}

float cal (int n){
	float result = 0.0;
	if (n == 1){
		result = avg();
	}
	if (n == 2){
		result = max();
	}
	if (n == 3){
		result = min();
	}
	return result;
}
float max(){
	float max = 0.0;
	int i ;
	max = score[0];
	for(i = 1; i < n ; i++){
		if (max < score[i]){
			max = score[i];
		}
    }
	return max ;
}
float min(){
	float min = 0.0;
	int i ;
	min = score[0];
	for(i = 1; i < n ; i++){
		if (min > score[i]){
			min = score[i];
		}
    }
	return min ;
}
float avg(){
	float average= 0.0 ;
	float sum = 0.0;
	int i;
	for( i = 0; i < n; i++){
		sum = sum + score[i];
	}
	average = (double)sum / n;
	

	return average;
}

/*
(1) input 2 score and number of student
(2) compute average in score[] ; write in function 
(3) show average 
*/
