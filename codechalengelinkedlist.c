#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int data;
	struct node *link;
}*ptr;

struct node* create(struct node*);
void delneg(struct node*);
int main(){
	int i,num,pos;
	
	struct node *head;
	struct node *print;
	head=NULL;
	
	head=create(head);
	delneg(head);
	print=head;
	
	while(print != NULL)
	{
		printf("The data is %d \n", print->data);			
		print=print->link;
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

void delneg(struct node* head){
	struct node *ptr,*prev,*node;
	prev=head;
	ptr=head->link;
	
	
	while(ptr !=NULL){
		if(ptr->data < 0 ){
			printf("Hello World\n");
			prev->link=ptr->link;
			free(ptr);
			break;
		}
		prev=ptr;
		ptr=ptr->link;
	}

	
}
