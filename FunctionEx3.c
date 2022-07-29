#include<stdio.h>

int factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n * factorial(n - 1);
	}
}

int main(){
	int a;
	printf("");
	scanf("%d",&a);
	printf("%d",factorial(a));
	return 0;
}