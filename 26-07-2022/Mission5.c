//Mission 005 - Basic Calculator

#include<stdio.h>

int main(){
	int num1, num2;
	char op;
	printf("Enter Expression : ");
	scanf("%d %c %d",&num1,&op,&num2);
	switch(op)
	{
		case '+':
			printf("Your Result: %d",num1+num2);
			break;
		case '-':
			printf("Your Result: %d",num1-num2);
			break;
		case '*':
			printf("Your Result: %d",num1*num2);
			break;
		case '/':
			printf("Your Result: %d982 + ",num1/num2);
			break;
		default:
			printf("ERROR!!!");
	}
	return 0;
}