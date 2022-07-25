#include<stdio.h>

int main(){
	//Fix Value
	int a = 5, b = 7, result2;
	result2 = a * b;
	printf("%d \n",result2);
	//INPUT
	int x,y,result;
	printf("Input integer1: ");
	scanf("%d",&x);
	printf("Input integer2: ");
	scanf("%d",&y);
	result = x*y;
	printf("x * y = %d",result);
	return 0;
}