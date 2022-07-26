//Mission 003 - Maximum Number
#include<stdio.h>

int main(){
	int num1,num2,num3,maxi;
	printf("Input three integers. \n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1 >= num2 && num1 >= num3){
		maxi = num1;
	}
	else if(num2 >= num1 && num2 >= num3){
		maxi = num2;
	}
	else{
		maxi = num3;
	}
	printf("The maximum number is %d",maxi);
	return 0;
}