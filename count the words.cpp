#include<stdio.h>
int main(){
	int n;
	scanf("%d\n",&n);
	char str [n];
	scanf("%d\n",&n);
	scanf("%[^\n]",str);
	for(int i=0,str[i]!='\0';i++){
		if(str[i]=='   ')
		count++;
	}
	printf("%d",count);
	return  0;
}