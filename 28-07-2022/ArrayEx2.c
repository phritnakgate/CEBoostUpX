#include<stdio.h>
#include<string.h>

int main(){
	/*
	//strlen()
	char str[20] = "12345 I love U";
	int str_length = strlen(str);
	printf("%d \n",str_length);
	
	//strcmp()
	char str1[]="ABCDEFG";
	char str2[]="ABCDEFG";
	char str3[]="EIEI";
	int result;
	result = strcmp(str1,str2);
	printf("strcmp(str1,str2) = %d\n",result);
	result = strcmp(str1,str3);
	printf("strcmp(str1,str3) = %d\n",result);
	
	*/
	
	//strcat()
	char str4[100] = "I love ", str5[] = "my cat";
	strcat(str4,str5);
	
	printf("str4 = %s\n",str4);
	printf("str5 = %s",str5);
	return 0;
}