#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node *enqueue(struct node *, int);
struct node *dequeue(struct node*,struct node*);

struct node{
	int data;
	struct node *link;
}*ptr;

int main(){
	int choice, num;
	struct node *head,*tra, *ptr1;

	ptr1=(struct node*)malloc(sizeof(struct node));
	head=ptr1;
	tra=head;


	do{
	
	
	printf("Enter a choice\n");
	scanf("%d",&choice);
	
	
	switch(choice){
	
	case 1:
	scanf("%d",&num);
	
	tra=enqueue(tra,num);
	
	ptr1=(struct node*)malloc(sizeof(struct node));
	tra->link=ptr1;
	tra=tra->link;
	
	break;
	
	case 2:
		if(head!=tra){
		head=dequeue(head,tra);
		}
		break;
	
	default:
		printf("Wrong input\n");
	
	}
	//printf("Data in head after 1st insertion %d\n",head->data);
	
	//tra=enqueue(tra,56);

	
	//tra=enqueue(tra,14);
	
	//head=dequeue(head);
	
	//head=dequeue(head);
	}while(1);
	
	return 0;
}

struct node* enqueue(struct node* tra, int num)
{
	struct node *temp;
	
	tra->data=num;
	printf("%d was inserted at %p\n", tra->data, tra);
	
return tra;
}

struct node* dequeue(struct node* head,struct node* tra){
	
	struct node *ptr, *temp;
	printf("%d deleted at %p\n",head->data,head);
	
	ptr=head;
	head=head->link;
	free(ptr);
	
	return head;
}

