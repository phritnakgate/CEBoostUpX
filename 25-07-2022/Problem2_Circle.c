#include<stdio.h>
#define PI 3.14

int main(){
	float r,dia,area;
	printf("Input radius: ");
	scanf("%f",&r);
	dia = 2 * PI * r;
	area = PI * (r*r);
	printf("Circumference is %.2f \n Area is %.2f",dia,area);
}