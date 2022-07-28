#include<stdio.h>
int main(){
	float weight[5] = {55.7,62.5,75.89,66.54,79.43};
	weight[0] = 78.64;
	weight[4] = 58.21;
	for(int i = 0; i < 5; i++){
		if(weight[i] > 60){
			printf("%.2f \t",weight[i]);
		}
		else{
			printf("");
		}
	}
	return 0;
}