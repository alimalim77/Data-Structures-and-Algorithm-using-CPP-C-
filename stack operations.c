#include<stdio.h>
#define MAX 20

void pop();
void push(int);

int stack[MAX];
int top=-1;

int main(){
	int check;
	int num,i;
	do{
		printf("\nEnter 1 to pop:\nEnter 2 to push:\nEnter -1 to exit:\n");
		scanf("%d", &check);
		switch(check){
			case 1:
				pop();
			break;
			
			case 2:
				
				printf("Enter a number to push\n");
				scanf("%d",&num);
				push(num);
			break;
			
			default:
				printf("\nWrong Input");
		}
		
	}while(check!=-1);
	
	printf("\n****ELEMENTS OF STACK ARE****\n");
	for(i=0; i <= top; i++)
	printf("a[%d]=%d\n",i, stack[i]);
}

void pop(){
	int item;
	if(top==-1){
		printf("Stack Underflow\n");
		return;
	}
	item=stack[top];
	printf("%d was removed\n", item);
	top--;
	

}

void push(int n){
	if(top==MAX){
		printf("Stack Overflow\n");
		return;
	}
	top++;
	stack[top]=n;
	
}
