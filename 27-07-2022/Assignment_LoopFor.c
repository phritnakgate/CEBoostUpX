#include<stdio.h>

int main(){
	int sum = 0;
	for(int i=66;i<=5648;i+=2){
		sum += i;
	}
	printf("%d",sum);
	return 0;
}