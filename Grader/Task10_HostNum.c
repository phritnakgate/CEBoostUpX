#include<stdio.h>
#include<math.h>

int main() {
	int bit,host,n;
	printf("");
	scanf("%d",&bit);
	if(bit >= 24){
		n = 32-bit;
		host = pow(2,n) - 2;
		printf("%d",host);
	}
	else if(bit > 30 || bit < 24){
		printf("error");
	}
	return 0;
}