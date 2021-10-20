#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//create(struct node**, struct node**);

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
	return 0;
}

create(struct node ** start, struct node** end){
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
			temp->prev=str;
			
		}
		
	}while(1);
	*end=temp;
	printf("\nAddress of start %d\nDeference of start is %d,\nDouble Defeence os start is %d\n",start,*start,**start);
	printf("\n");
	printf("\nAddress of start %p\nDeference of start is %p,\nDouble Defeence os start is %p\n",start,*start,**start);
	printf("\n");
	
	temp=NULL;
}
