#include<stdio.h>
char div(int);

int main(){
	int num;
	char res;
	
	printf("Enter a num divisible by 6\n");
	scanf("%d",&num);
	
	res=div(num);
	if (res== 'y')
	printf("It is divisible\n");
	else
	printf("Not divisible\n");
	
	return 0;
}

char div(int n){
	if(n%6==0)
	return 'y';
	else
	return 'n';
}
