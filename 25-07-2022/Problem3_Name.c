#include<stdio.h>

int main(){
	char name[50];
	printf("Input your full name: ");
	scanf("%[a-zA-z 
	]s",&name);
	printf("Your Name: %s",name);
}