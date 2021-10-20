#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

int main(){
	struct node *root;
	
	traverse(root);
	
	
	
	
	
	return 0;
}

void create(struct node* root){
	struct node* p,*temp;
	p=root;
	
	do{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Ente the data of Root at %p",root);
		scanf("%d",temp->data);
	}
}
