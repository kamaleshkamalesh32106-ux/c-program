#include<stdio.h>
int main (){
	int a,b;
	printf("enter any two number:");
	scanf("%d%d",&a,&b);
	if(a*b<0){
		printf("%d a*b is negative.\n");
	}	else{
		printf("%d a*b is positive.\n");
	}
	return 0;
	
}