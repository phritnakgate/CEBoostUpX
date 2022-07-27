#include<stdio.h>

int main(){
	int n = 61;
	int binaryNum = 0;
	int k = 1;
	while(n > 0){
		binaryNum += (n%2) * k;
		n /= 2;
		k *= 10;
	}
	printf("%d",binaryNum);
	return 0;
}