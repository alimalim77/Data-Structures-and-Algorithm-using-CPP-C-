#include<stdio.h>

int main(){
	int arr[10];
	int i,count=0;
	int var;
	
	for(i=0; i<10; i++){
	printf("Element at %d is", i+1);
	scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to search\n");
	scanf("%d",&var);
	
	for(i=0; i<10; i++){
		if(var==arr[i])
		++count;
	}
	
	printf("***Number occured %d times***", count);
	return 0;
}
