#include<stdio.h>

int main(){
	int a,b,x,y;
	int top,down,left,right;
	int walk;
	
	//Start-Stop Point
	printf("Input start(x,y): ");
	scanf("%d%d",&a,&b);
	printf("Input stop(x,y): ");
	scanf("%d%d",&x,&y);
	
	//Walk
	//top-down
	if(y > b){
		top = y - b;
		down = 0;
	}
	else if(y == b){
		top = 0;
		down = 0;
	}
	else{
		top = 0;
		down = b - y;
	}
	//left-right
	if(x > a){
		right = x - a;
		left = 0;
	}
	else if(x == a){
		left = 0;
		right = 0;
	}
	else{
		right = 0;
		left = a - x;
	}
	walk = top + down + right + left;
	printf("%d",walk);
}