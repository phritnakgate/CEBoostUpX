//Mission 002 - Triangle
#include<stdio.h>

int main(){
	int a,b,c;
	printf("Please input 3 sides of triangle. \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a + b > c && b + c > a && c + a > b ){
		printf("All sides can combine into a triangle.");
	}
	else{
		printf("All sides cannot combine into a triangle.");
	}
	return 0;
}