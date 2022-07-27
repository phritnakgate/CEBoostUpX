#include<stdio.h>

int main(){
	int mass,fuel;
	scanf("%d",&mass);
	fuel = (mass / 3) - 2;
	if(fuel >= 0){
		printf("%d",fuel);
	}
	else{
		fuel = 0;
		printf("%d",fuel);
	}
	return 0;
}