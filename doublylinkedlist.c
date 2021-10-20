#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*ptr;
struct node *end;

int main(){
	struct node *head;
	head=NULL;
	
	head=create(head);
	printf("The data as entered by user is:\n");
	
	while(head!=end){
		printf("The value %d is at %p\nNext at %p\nPrevious at %p\n",head->data,head,head->next,head->prev);
		printf("\n\n");
		head=head->next;
	}
	printf("The value %d is at %p\nNext at %p\nPrevious at %p\n",head->data,head,head->next,head->prev);
	return 0;
}

struct node* create(struct node * head){
	struct node *ptr,*temp, *str;
	int num;
	
	do{
		printf("Enter the data to insert");
		scanf("%d",&num);
		if(num==0)
		break;
		
		ptr= (struct node*)malloc(sizeof(struct node));
		ptr->data=num;
		
		if(head==NULL){
			head=ptr;
			temp=head;
			temp->prev=NULL;
		}
		
		
		else{
			str=temp;
			temp->next=ptr;
			temp=temp->next;
			temp->prev=str;
		}
	
	}while(1);
	str=end;
	temp=NULL;
	
	return head;
}
