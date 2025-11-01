#include<stdio.h>
int main(){
	char str[20];
	scanf("%s");
	scanf("%[\n]s",str);
	printf("%s",str);
	return 0;
}