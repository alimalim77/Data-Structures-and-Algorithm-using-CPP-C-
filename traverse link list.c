#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);
struct node{
	int data;
	struct node *link;
}*ptr;


int main(){
	int i;
	struct node *head;
	struct node *print;
	head=NULL;
	
	
	head=create(head);
	
	
	
	return 0;	
}

struct node* create(struct node* head){
	int i,num;
	char check;
	struct node *temp;
	
	while( num != -1){
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("Enter to inserd %dth element\n", i);
	scanf("%d",&num);
	ptr->data=num;
	
	if(head==NULL){
		//temp=head=ptr;
		head=ptr;
		temp=head;
		
	}
	else{	
		temp->link=ptr;
		temp=ptr;
		printf("%d was inserted at %p\n", temp->data,temp);
	}
	
}
   
    temp->link=NULL;
	temp=head;
   while( temp != NULL)
	{
		printf("%d at %p\n", temp->data, temp);
		temp=temp->link;
	}
	
return temp;
}
