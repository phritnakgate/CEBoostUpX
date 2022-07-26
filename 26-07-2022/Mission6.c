//Mission 006 - Grade Generator

#include<stdio.h>

int main(){
	int score,n;
	printf("Input your score: ");
	scanf("%d",&score);
	n = score / 10;
	switch(n){
		case 10:
		case 9:
		case 8:
			printf("Your grade is A");
			break;
		case 7:
			printf("Your grade is B");
			break;
		case 6:
			printf("Your grade is C");
			break;
		case 5:
			printf("Your grade is D");
			break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Your grade is F");
			break;
		default:
			printf("Invalid score. It must be between 0 - 100");
	}
	return 0;
}