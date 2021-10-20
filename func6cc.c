#include<stdio.h>
void pass(int[]);

int main(){
	int a[10]={23,56,34,3,7,243,28};
	
	pass(a);
	return 0;
}

void pass(int p[] ){
	printf("%d\n",*(p));
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+2));
}
