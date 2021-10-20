#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,num;
	long int *gdp;
	
	printf("Enter the numbers to provide\n");
	scanf("%d",&num);
	
	gdp=(long int*)malloc(sizeof(long int)*num);
	
	for(i=0;i<num;i++){
		printf("a[%d]=\t",i);
		scanf("%d",&gdp[i]);
		printf("\n");
	}
	
	for(i=0;i<num;i++){
		printf("%d",gdp[i]);
		printf("\n");
	}
	
	return 0;
	
}
