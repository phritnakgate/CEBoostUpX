#include<stdio.h>
#include<string.h>


int main(){
	//Problem1
//	char fs[100],ss[100];
//	printf("Input your first string: ");
//	scanf("%s",&fs);
//	printf("Input your second string: ");
//	scanf("%s",&ss);
//	if(strcmp(fs,ss) == 0){
//		printf("YES\n");
//	}
//	else{
//		printf("NO\n");
//	}
	
	//Problem2
	char palin[100],revpalin[100]="";
	printf("Enter the string to check if it is a palindrome: ");
	scanf("%s",palin);
	strcpy(revpalin,palin);
	
	if(strcmp(strrev(palin), revpalin) == 0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}