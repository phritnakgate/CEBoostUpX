#include<stdio.h>
int main(){
	int n[100] = {};
	for(int i=1;i<=100;i++){
		n[i] = i;
		if(i%10 == 0){
			printf(" %d\n",n[i]);
		}
		else{
			printf(" %d",n[i]);	
		}		
	}
	return 0;
}