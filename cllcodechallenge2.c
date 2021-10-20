#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node *create(struct node*);
struct node* del(struct node*, struct node*);

struct node{
	int data;
	struct node *link;
}*ptr;

int main(){
	struct node *head,*ptr1,*end;
		head=NULL;
	
	head=create(head);
	ptr1=head->link;
	
	while(ptr1!=head){
		printf("%d\n",ptr1->data);
		end=ptr1;
		ptr1=ptr1->link;
		end=ptr1;
	}
	
	head=del(head,end);
	printf("First node is %d",head->data);

	return 0;
}

struct node *create(struct node *head){
	struct node *ptr, *temp;
	int num;
	int re;
	
	do{
		printf("Enter a number to enter\n");
		scanf("%d",&num);
		if(num==-1)
		break;
		ptr=(struct node*)malloc(sizeof(struct node));
		
		ptr->data=num;
		
		if(head==NULL){
			head=ptr;
			temp=head;
		}
		else{
			temp->link=ptr;
			temp=ptr;
		}
		
	}while(1);
	
	temp->link=head;
	return head;
}

struct node* del(struct node * head, struct node* end){
	struct node *temp;
	temp=head;
	head=head->link;
	end->link=head;
	
	free(temp);
	
	return head;
	
}
