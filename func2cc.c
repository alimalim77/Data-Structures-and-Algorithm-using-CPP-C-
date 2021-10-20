#include<stdio.h>
void min(int, int ,int);
int main(){
	int d1,d2,d3;
	
	printf("Enter the temp of Day 1\n");
	scanf("%d",&d1);
	printf("Enter the temp of Day 2\n");
	scanf("%d",&d2);
	printf("Enter the temp of Day 3\n");
	scanf("%d",&d3);
	min(d1,d2,d3);
	
	
	return 0;
}

void min(int one, int two, int three){
	int c;
	(one > two) ? ( one > three? printf("One is greatest\n") : printf("Three is greatest\n") )  : (two > three ? printf("Two is greatest\n") : printf("Three is greatest\n"));
}
