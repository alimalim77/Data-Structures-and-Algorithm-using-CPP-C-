#include<stdio.h>
#include<stdlib.h>
void postorder(struct node*);
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
	postorder(root);
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
	printf("Enter the left child of%d\n",x);
	ptr->left=create();
	printf("Enter the right child of %d\n",x);
	ptr->right=create();
	return ptr;
}

void postorder(struct node* root){
	int x;
	if(root==NULL)
	return;
	
	postorder(root->left);
	postorder(root->right);
	printf(" %d ",root->data);
}
