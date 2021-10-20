#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);
struct node* insert(struct node* head);

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*ptr;
struct node *end;

int main(){
	struct node *head,*print;
	head=NULL;
	
	head=create(head);
	printf("The data as entered by user is:\n");
	print=head;
	
	while(print!=NULL){
		printf("The value %d is at %p\nNext at %p\nPrevious at %p\n",print->data,print,print->next,print->prev);
		printf("\n\n");
		print=print->next;
	}
	printf("The value %d is at %p\nNext at %p\nPrevious at %p\n",print->data,print,print->next,print->prev);
	
	head=insert(head);
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

struct node *insert(struct node *head){
	struct node *ptr;
	int num;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter the nimber to insert\n");
	scanf("%d",&num);
	ptr->data=num;
	
	ptr->prev=NULL;
	ptr->next=head;
	head->prev=ptr;
	head=ptr;
	while(head!=NULL){
		printf("The value after insertion is %d\n",head->data);
		printf("\n\n");
		head=head->next;
	}
	return head;
}
