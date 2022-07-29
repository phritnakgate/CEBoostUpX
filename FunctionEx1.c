#include<stdio.h>

void siratiNo1(){
	printf("Hello My Name is Boss.\n");
}
void siratiNo2(char fname[100],int agef){
	if(agef < 0){
		return;
	}
	else{
		printf("FullName: %s\nAge: %d",fname,agef);
	}
}


int main(){
	int age;
	printf("INPUT AGE: ");
	scanf("%d",&age);
	siratiNo1();
	siratiNo2("Phrit",age);
	return 0;
}