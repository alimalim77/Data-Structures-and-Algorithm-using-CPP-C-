#include<stdio.h>
#include<stdlib.h>
#define size 5



struct node{
	int data;
	struct node *next;
}*ptr;

struct node *arr[size];

//void alloc(struct node*);

int main(){
	struct node *temp;
	temp=arr[1];
	temp= (struct node*)malloc(sizeof(struct node));
	alloc(temp);
	temp=arr[1];
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	return 0;
}

alloc(struct node* ptr){
	struct node *ptr2, *ptr3;
	
	
	ptr->data=4;
	
	
	ptr2= (struct node*)malloc(sizeof(struct node));
	ptr->next=ptr2;
	
	ptr2->data=56;
	
	return;
}

