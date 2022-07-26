/*
Review 25/7/2022
	Ex.1 Comparison Operator => Slide
	Ex.2 Logical Operator ==> Slide
*/

//Mission 001 - What's Integer
#include<stdio.h>

int main(){
	int x;
	printf("Please input your number : ");
	scanf("%d",&x);
	if(x > 0){
		printf("%d is a positive number.",x);
	}
	else if(x == 0){
		printf("This number is equal to 0.");
	}
	else{
		printf("%d is a negative number.",x);
	}
	return 0;
}