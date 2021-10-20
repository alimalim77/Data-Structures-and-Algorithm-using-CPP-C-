#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);
struct node* insert(struct node*);
struct node* search(int, struct node*);
struct node* del(struct node*);
void delp(struct node*,int);
void dele(struct node*);

void insertbef(struct node*);
void insertaft(struct node*);



struct node{
	int data;
	struct node *link;
}*ptr;


int main(){
	int i,num,pos;
	char re;
	struct node *head;
	struct node *print;
	head=NULL;
	
	do{
		
		printf("\n\nEnter the following numbers to follow with operations accordingly\n");
		printf("**Enter 1 to create the link list\n");
		printf("**Enter 2 to insert at the first position list\n");
		printf("**Enter 3 to search the number\n");
		printf("**Enter 4 to insert before a number\n");
		printf("**Enter 5 to insert after a number\n");
		printf("**Enter 6 to display the linked list\n");
		printf("**Enter 7 to delete the first number\n");
		printf("**Enter 8 to delete a particular number\n");
		printf("**Enter 9 to delete the last number\n");
		printf("**Enter 10 to exit\n");
		scanf("%d",&num);
		
		
		switch(num){
		case 1:
			head=create(head);
			break;
		
		case 2:
			head=insert(head);
			print=head;
			while(print != NULL)
			{
			printf("The data is %d \n", print->data);			
			print=print->link;
			}
			break;
		
		case 3:
			printf("Enter the nnumber to search\n");
			scanf("%d",&num);
			print = search(num , head);
			break;
			
		case 4:
			insertbef(head);
			print=head;
	
			while(print != NULL){
			printf("\nThe data after inserting before is %d \n", print->data);
			print=print->link;
			}
			break;
			
		case 5:
			insertaft(head);
			print=head;
			
			while(print != NULL){
			printf("\nThe data after inserting after is %d \n", print->data);
			print=print->link;
			}
			break;
			
		case 6:
			print=head;
			while(print != NULL){
			printf("\nThe data is %d \n", print->data);
			print=print->link;
			}
			break;
			
		case 7:
			head=del(head);
			printf("First node was deleted\n");
			break;
			
		case 8:
			printf("Enter the node to delete\n");
			scanf("%d",&pos);
			delp(head,pos);
			break;
			
		case 9:
			dele(head);
			break;
			
			case 10:
				exit(0);

		default:
			printf("Wrong input\n");
	
	}
	printf("Check it!!");
	}while(1);
	
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

struct node* search(int n, struct node *h){
	
	while(h != NULL){
		if(n == h->data){
			printf("Number found in the linked list\n");
			return h;
		}
		h=h->link;
	}
	printf("Number not found\n");
	return NULL;
}

void insertbef(struct node* head){
	struct node *temp,*prev,*node;
	int p,item;
	node= (struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter the number to insert\n");
	scanf("%d",&p);
	node->data=p;
	
	
	prev=head;
	temp=head->link;
	
	printf("Enter the position number to insert\n");
	scanf("%d",&item);
	while(temp!=NULL)
	{
		if(item==temp->data)
		{
			prev->link=node;
			node->link=temp;
		}
	prev=temp;
	temp=temp->link;	
	}
	
}

void insertaft(struct node* head){
	struct node *temp1,*aft,*node;
	int p,item;
	node= (struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter the number to insert\n");
	scanf("%d",&p);
	node->data=p;
	
	temp1=head;
	aft=temp1->link;
	
	printf("\nEnter the position number to insert\n");
	scanf("%d",&item);
	while(aft!=NULL){
		
		if(item==temp1->data)
		{
			temp1->link=node;
			node->link=aft;		
		}
		
	temp1=temp1->link;
	aft=temp1->link;
	}
	
}

struct node* del(struct node* head){
	struct node *ptr;
	ptr= (struct node*)malloc(sizeof(struct node));
	
	if(head==NULL)
	printf("Node does not exists\n");
	
	
	ptr=head;
	head=head->link;
	free(ptr);
	return head;
}

void delp(struct node* head, int pos){
	struct node *ptr,*prev;
	prev=head;
	ptr=head->link;
	
	if(head==NULL)
	printf("Node does not exists\n");
	
	while(ptr!=NULL){
		if(ptr->data==pos){
		prev->link=ptr->link;
		free(ptr);
		printf("Node was deleted\n");
		return;
		}
		prev=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	printf("No such node exists\n");
	
}

void dele(struct node* head){
	struct node *ptr,*prev;
	
	prev=head;
	ptr=head->link;
	if(head==NULL)
	printf("Node does not exists\n");
	
	while(ptr->link!=NULL){
		prev=ptr;
		ptr=ptr->link;
	}
	prev->link=NULL;
	free(ptr);
	printf("Node was deleted successfully\n");
}

