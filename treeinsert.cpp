#include<stdio.h>
#include<stdlib.h>

struct node* create(struct node*);

struct node{
	int data;
	struct node *left;
	struct node *right;
}*ptr;

int main(){
	struct node* root;
	root=NULL;
	
	root=create(root);
	printf("%d",root->data);
	return 0;
	
}

struct node *create(struct node* root){
	struct node* ptr;
	root=ptr;
	do{
		ptr=(struct node*)malloc(sizeof(struct node));
		
	}
	return root;
}
