#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *link;
};

struct node * create( struct node*);
void print(struct node*, struct node*);


int main(){
	struct node *head;
	head= NULL;
	//printf("%p",head);
	head= create(head);
	
}

struct node* create (struct node *head){
	struct node *ptr, *temp;
	int num;
	printf("Enter the number to insert\n");
	scanf("%d",&num);
	
	do{
		ptr= (struct node*)malloc(sizeof(struct node));
		ptr->data=num;
		
		if(head==NULL){
			head=temp=ptr;
		}
		else{
			temp->link=ptr;
			temp=ptr;
		}
		printf("%d was inserted at %p\n", temp->data, temp);
		temp->link=NULL;
		printf("Enter the number to insert\n");
		scanf("%d",&num);
	
	}while(num!=-1);
	
	print(temp,head);
	
	
}

void print(struct node *temp,struct node *head){
	temp=head;
	while(temp != NULL){
		printf("The data is %d\n", temp->data);
		temp=temp->link;
	}
	getch();
}
