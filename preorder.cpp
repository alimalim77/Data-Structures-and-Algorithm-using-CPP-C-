#include<stdio.h>
#include<stdlib.h>
void preorder(struct node*);
struct node *create();


struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root;
int main(){
	//struct node *root;
	root= create();
	printf("\n---------\n");
	preorder(root);
}

struct node* create()
{
	int x;
	struct node *ptr;
	ptr= (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be entered\n");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	ptr->data=x;
	printf("Enter the left child of %d at address %d\n",x, &root->left);
	ptr->left=create();
	printf("Enter the right child of %d at %d\n",x, &root->right);
	ptr->right=create();
	return ptr;
}

void preorder(struct node* root){
	int x;
	if(root==NULL)
	return;
	

	printf(" %d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
