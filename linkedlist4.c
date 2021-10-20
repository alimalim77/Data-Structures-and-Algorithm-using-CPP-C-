#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node* create(struct node*);
struct node* insert(struct node*);
struct node* search(int, struct node*);
void insertbef(struct node*);
void insertaft(struct node*);

struct node{
	int data;
	struct node *link;
}*ptr;


int main(){
	int i,num;
	struct node *head;
	struct node *print;
	head=NULL;
	
	/*do{
		printf()
		re=getchar();
	}while(re='n')*/
	head=create(head);
	
	head=insert(head);
	print=head;
	while(print != NULL){
		printf("The data is %d \n", print->data);
		print=print->link;
	}
	
	printf("Enter the nnumber to search\n");
	scanf("%d",&num);
	print = search(num , head);

	
	insertbef(head);
	print=head;
	
	while(print != NULL){
		printf("\nThe data after inserting before is %d \n", print->data);
		print=print->link;
	}
	
	insertaft(head);
	print=head;
	while(print != NULL){
		printf("\nThe data after inserting after is %d \n", print->data);
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
			printf("Number found\n");
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
	node= (struct node*)malloc(sizeof(struct node*));
	
	printf("\nEnter the number to insert\n");
	scanf("%d",&p);
	node->data=p;
	
	
	prev=head;
	temp=head->link;
	
	printf("Enter the position number to insert\n");
	scanf("%d",&item);
	while(temp!=NULL){
		if(item==temp->data){
			prev->link=node;
			node->link=temp;
		}
	prev=temp;
	temp=temp->link;	
	}
	
}

void insertaft(struct node* head){
	struct node *temp,*aft,*node;
	int p,item;
	node= (struct node*)malloc(sizeof(struct node*));
	
	printf("\nEnter the number to insert\n");
	scanf("%d",&p);
	node->data=p;
	
	temp=head;
	aft=head->link;
	
	printf("\nEnter the position number to insert\n");
	scanf("%d",&item);
	while(temp!=NULL){
		if(item==temp->data){
			temp->link=node;
			node->link=aft;
		}
		
	temp=aft;
	aft=aft->link;
	}
	
}
