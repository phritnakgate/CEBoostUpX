#include<stdio.h>
#include<math.h>

int main(){
	float weight,height,bmi;
	do{
		printf("Input weight: ");
		scanf("%f",&weight);
		printf("Input height(cm): ");
		scanf("%f",&height);
		height /= 100;
		bmi = weight / pow(height,2);
		printf("BMI is %.2f",bmi);
	}while(weight <= 0 || height <= 0);
	return 0;
}