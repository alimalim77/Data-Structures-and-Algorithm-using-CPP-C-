#include<stdio.h>
#include<stdlib.h>
#define size 6

struct node{
	int data;
	struct node *next;
};

struct node *chain[size];

void init(){
	int i;
	chain[i]=NULL;
}

void insert(int value){
	struct node *newnode,*temp;
	int key;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=value;
	newnode->next=NULL;
	
	key = value%size;
	
	if(chain[key]==NULL){
		chain[key]=newnode;
	}
	else
	{
		struct node *temp=chain[key];
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void print(){
	int i;
	
	for(i=0; i< size; i++)
	{
	struct node *temp= chain[i];
	printf("chain[%d]-->",i);
	
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	}
}

int search(int value){
	int key= value%size;
	
	struct node *temp= chain[key];
	
	while(temp){
		if(temp->data==value)
		return 1;
		
		temp=temp->next;
	}
	return 0;
}

int deleteele(int value){
	int key= value%size;
	
	struct node *temp= chain[key], *dealloc;
	
	if(temp!=NULL)
	{
		if(temp->data==value)
		{
			dealloc=temp;
			temp=temp->next;
			free(dealloc);
			return 1;	
		}
		else
		{	
			while(temp->next){
				if(temp->next->data==value)
				{
					dealloc=temp->next;
					temp->next=temp->next->next;
					free(dealloc);
					return 1;
				}
			temp=temp->next;	
			}
		}	
	}
	return 0;
}



int main(){
	insert(4);
	print();
}
