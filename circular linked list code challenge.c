#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
  {
	int data;
	struct node *link;
  };
 

struct node * create(struct node *start)
  {
	 struct node *temp,*ptr;   
	 char ch;
	 int num;
	 do
	  {
		printf("\n\t Enter the value of number : ");
		scanf("%d",&num);
		temp = (struct node*) malloc(sizeof(struct node));
		temp->data = num ;
		if(start==NULL)
		  {
			start = temp;
			ptr = start;
		  }
		else
		  {
			ptr->link = temp;
			ptr = ptr->link;   
		  }
ptr->link = start;		

printf("\n\t Do you want to add more nodes (y/n) : ");
		fflush(stdin);
		scanf("%c",&ch);
	   } while(ch=='y'||ch=='Y');
	 return(start);
	}

void display(struct node *start)
	{
	 struct node *temp;
	 	
	 	temp=start;
	 	
	 	do{
	 		if(temp->data>=125 && temp->data<=255){
	 			printf("%d is at %p\n",temp->data,temp);
			 }
			 temp=temp->link;
		 }while(temp!=start);

	getch() ;
	return;
	}
 
int main()
   {
	struct node *start;
	int choice,num,data;
	char ch;
	start = NULL;
 	  system("cls") ;
  		   printf("\n\t\t **** CREATE BLOCK ****\n");
		   start = create(start);
  		   printf("\n\t\t **** DISPLAY BLOCK ****\n");
		   display(start);
}
