#include<stdio.h>
#include<stdlib.h>

struct node *create(struct node*);

struct node{
	int data;
	struct node *link;
}*ptr;

int main(){
	struct node *head,*p1;
	head=NULL;
	int count=0;
	
	head=create(head);
	p1=head;
	
	while(count<10 ){
		printf("%d is at %p\n",p1->data,p1);
		p1=p1->link;
		count++;
	}
	
}

struct node* create(struct node* head){
	struct node *ptr,*temp;
	int num;
	
	do{
		printf("Enter the number to insert\n");
		scanf("%d",&num);
		if(num==0)
		break;
		
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=num;
		
		if(head==NULL){
			head=ptr;
			temp=head;
		}
		
		else{
			temp->link=ptr;
			temp=temp->link;
		}
	}while(1);
	temp->link=head;
	
	return head;
}
