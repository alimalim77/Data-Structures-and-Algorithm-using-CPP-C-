#include<stdio.h>

int main(){
	//int a=30,b=2;
	int i;
	//int *ptr=&a;
	int arr[10];
	
/*	printf("Value of %u is %d\n",ptr, *ptr);
	ptr++;
	ptr=&b;
	printf("Value of %u is %d\n",ptr, *ptr);*/
	
	
	for(i=0; i<3; i++)
	scanf("%d", &arr[i]);
	
	for(i=0; i<3; i++)
	printf("%d\n",*(arr+i));
		
	return 0;
}
