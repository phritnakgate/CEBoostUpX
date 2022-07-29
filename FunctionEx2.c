#include<stdio.h>

void greet(char *name); //Function Prototype

void main(){
	char fname[100];
	printf("");
	scanf("%s",&fname);
	greet(fname);
}

void greet(char *name){
	if(name == NULL){
		return;
	}
	else{
		printf("Hello my name is %s",name);
	}
}