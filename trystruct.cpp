#include<stdio.h>
#define MAX 10

void push(struct node*, int);
void pop(struct node*);

struct node{
	int top;
	int a[MAX];
};
struct node n1;

int main(){
		int check,num;
		do{
		printf("\nEnter 1 to pop:\nEnter 2 to push:\nEnter -1 to exit:\n");
		scanf("%d", &check);
		switch(check){
			case 1:
				pop(&n1);
			break;
			
			case 2:
				
				printf("Enter a number to push\n");
				scanf("%d",&num);
				push(&n1,num);
			break;
			
			default:
				printf("\nWrong Input");
		}
		
	}while(check!=-1);
	return 0;
}

void push(struct node *ptr, int n){
	ptr->top++;
    ptr->a[ptr->top]=n;
    //return;
}

void pop(struct node* ptr){
	int item;
    if(ptr->top == -1)
	   return;
    item=ptr->a[ptr->top];
    //ptr->arr[ptr->top]=0;
    ptr->top--;
}
