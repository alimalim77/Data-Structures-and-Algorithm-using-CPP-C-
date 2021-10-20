#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);
struct node* insert(struct node*);
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
	
	head=insert(head);
	while(head != NULL){
		printf("The data is %d \n", head->data);
		head=head->link;
	}
	
	
	return 0;	
}

struct node* create(struct node* head){
	int i,num;
	char check;
	struct node *temp;
	
	while( num != -1){
	i++;
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("Enter to inserd %dth element\n ", i);
	scanf("%d",&num);
	if(num==-1)
	break;
	
	ptr->data=num;
	
	if(head==NULL){
		//temp=head=ptr;
		head=ptr;
		temp=head;
		printf("%d was inserted at %p\n", temp->data,temp);
		
	}
	else{	
		temp->link=ptr;
		temp=ptr;
		printf("%d was inserted at %p\n", temp->data,temp);
	}

}
   temp->link=NULL;
return head;
}

struct node* insert(struct node *head){
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	int num;
	printf("Enter to insert element in insert function\n ");
	scanf("%d",&num);
	ptr->data=num;
	
	ptr->link=head;
	head=ptr;
	
	return head;
}
