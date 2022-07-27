#include<stdio.h>

int main(){
	//New Line
	for(int i=0;i<5;i++){
		
		//Print * on each line
		for(int j=0;j<5;j++){
		if(i == 0 || j == 0 || i == 4 || j == 4){
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
	return 0;
}