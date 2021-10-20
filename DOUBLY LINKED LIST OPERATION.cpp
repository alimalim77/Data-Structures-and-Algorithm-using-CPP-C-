#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void create(struct node**, struct node**);
struct node *insert(struct node *);
void insb(struct node**,struct node**);
void delb(struct node*);
void dele(struct node*);
void delp(struct node**,struct node**);

struct node{
	int data;
	struct node *prev;
	struct node *next;
}*ptr;

int main(){
	struct node *start,*end,*temp1;
	start=end=NULL;
	
	create(&start,&end);
	
	printf("The data as entered by user is:\n");
	temp1=start;
	
	while(temp1!=NULL){
		printf("The value %d is at %p\nNEXT AT %p\nPrevious at %p\n",temp1->data,temp1,temp1->next,temp1->prev);
		printf("\n\n");
		temp1=temp1->next;
	}
	temp1=end;
	printf("GOING BACKWARD NOW\n");
	
	
	while(temp1!=NULL){
		printf("The value %d is at %p\nNext at %p\nPREVIOUS AT %p\n",temp1->data,temp1,temp1->next,temp1->prev);
		printf("\n\n");
		temp1=temp1->prev;
	}
	
	start=insert(start);
	
	insb(&start,&end);
	insb(&start,&end);
	delp(&start,&end);
	
	temp1=start;
	
	while(temp1!=NULL){
		printf("The value %d is at %p\nNEXT AT %p\nPrevious at %p\n",temp1->data,temp1,temp1->next,temp1->prev);
		printf("\n\n");
		temp1=temp1->next;
	}
	return 0;
}

void create(struct node ** start, struct node** end){
	struct node *ptr,*temp, *str;
	int num;
	
	do{
		printf("Enter the data to insert");
		scanf("%d",&num);
		if(num==0)
		break;
		
		ptr= (struct node*)malloc(sizeof(struct node));
		ptr->data=num;
		
		if(*start==NULL){
			*start=ptr;
			temp=*start;
			temp->prev=NULL;
			
		}
		
		
		else{
			
			str=temp;
			temp->next=ptr;
			temp=temp->next;
			*end=temp;
			temp->prev=str;
			
		}
		
	}while(1);
	
	printf("\nAddress of start %d\nDeference of start is %d,\nDouble Defeence os start is %d\n",start,*start,**start);
	printf("\n");
	printf("\nAddress of start %p\nDeference of start is %p,\nDouble Defeence os start is %p\n",start,*start,**start);
	printf("\n");
	
	temp->next=NULL;
}


struct node *insert(struct node *head){
	struct node *ptr,*print;
	int num;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter the nimber to insert\n");
	scanf("%d",&num);
	ptr->data=num;
	
	ptr->prev=NULL;
	ptr->next=head;
	head->prev=ptr;
	head=ptr;
	print=head;
	while(print!=NULL){
		printf("The value after insertion is %d\n",print->data);
		printf("\n\n");
		print=print->next;
	}
	return head;
}

void insb(struct node **start, struct node** end){
	struct node *ptr,*temp,*print;
	int num;
	int pos;
	ptr=*start;
	
	temp=(struct node*)malloc(sizeof(struct node));
	
	
	printf("Enter the number to insert\n");
	scanf("%d",&num);
	temp->data=num;
	printf("Enter the number before position\n");
	scanf("%d", &pos);
	printf("\n\n");
	if(ptr->data==pos){
		ptr=insert(ptr);
		return;
	}
	while(ptr->data!=pos){
		ptr=ptr->next;
		}
	
	temp->next=ptr;
	temp->prev=ptr->prev;
	ptr->prev->next=temp;
	ptr->prev=temp;
	
	print=*start;
	
	while(print->next!=NULL){
		printf("%d\n",print->data);
		print=print->next;
	}
	printf("%d\n",print->data);
	
	
}


void insa(struct node **start, struct node** end){
	struct node *ptr,*temp,*print;
	int num;
	int pos;
	ptr=*start;
	
	temp=(struct node*)malloc(sizeof(struct node));
	
	
	printf("Enter the number to insert\n");
	scanf("%d",&num);
	temp->data=num;
	printf("Enter the number after position\n");
	scanf("%d", &pos);
	
	while(ptr->data!=pos){
		ptr=ptr->next;
		}
	
	temp->prev=ptr;
	temp->next=ptr->next;
	ptr->next->prev=temp;
	ptr->next=temp;
	
	print=*start;
	
	while(print->next!=NULL){
		printf("%d\n",print->data);
		print=print->next;
	}
	printf("%d\n",print->data);
	
	
}

void delp(struct node** start, struct node** end){
	struct node *ptr, *temp;
	int num;
	ptr=*start;
	printf("Enter the node to delete\n");
	scanf("%d",&num);
	
	while(ptr->data!=num){
		ptr=ptr->next;
	}
	
	if(ptr->prev==NULL){
		delb(*start);
		return;
	}
	else if(ptr->next==NULL){
		dele(*end);
		return;
	}
	else{
		temp=ptr;
		ptr->prev->next=ptr->next;
		ptr->next->prev=ptr->prev;
		free(temp);
		temp=NULL;
	}
}

void delb(struct node* start){
	struct node *ptr,*temp;
	temp=start;
	
	ptr=temp;
	ptr=ptr->next;
	ptr->prev=NULL;
	start=ptr;
	free(temp);
}

void dele(struct node* end){
	struct node *ptr,*temp;
	
	temp=end;
	end->prev->next=NULL;
	temp->prev=NULL;
	temp->next=NULL;
	free(temp);
	
}
