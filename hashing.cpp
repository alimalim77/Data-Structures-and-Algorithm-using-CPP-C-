// Hashing Technique

#include<stdio.h>
#include<stdlib.h>
#define size 6

void fill(int[]);
void insert(int [],int);
void del(int[],int);
void search(int[],int);


int main(){
	int a[size];
	int i,dec,data;
	
	fill(a);
	
	for(i=0; i< size; i++){
		printf("%d\n",a[i]);
	}
	
	do{
		printf("\nEnter 1 to insert\n2 to delete\n3 ro search\n-1 to exit\n");
		scanf("%d", &dec);
		
		switch(dec){
			
			case 1:
				printf("Enter the data\n");
				scanf("%d",&data);
				insert(a,data);
				//system("cls");
			break;
			
			case 2:
				printf("Enter the value to delete\n");
				scanf("%d",&data);
				del(a,data);
				//system("cls");
				break;
			
			case 3:
				printf("Enter the value to search\n");
				scanf("%d",&data);
				search(a,data);
				break;
				
			default:
				printf("Wrong Input\n");
			
		}
	
	}while(dec!=-1);
	
	for(i=0; i< size; i++){
		printf("%d\n",a[i]);
	}
		
	return 0;
}

void fill(int a[]){
	int i;
	for(i=0; i< size; i++){
		a[i]=-1;
	}
}

void insert(int a[],int data){
	int key,key1;
	
	key=data%size;
	key1=key;
	
	while(a[key1]!=-1){
			key1=(key+1)%size;
			
			if(key1==key)
			{
				printf("Hash cannnot be done\n");
				return;
				
			}
		}
	a[key1]=data;
	printf("Value was inserted\n");
	return;
}

void del(int a[],int data){
	int key;
	key=data%size;
	int index=key;
	
	while(a[index]!=data){
		index=(index+1)%size;
		
		if(index==key){
			printf("Element not found\n");
			return;
		}
	}
	a[index]=-1;
	
	return;
}

void search(int a[],int data){
	int key;
	key=data%size;
	int index=key;
	
	if(a[index]==data){
		printf("Element found\n");
		return;
	}
	
	while(a[index]!=data){
		index=(index+1)%size;
		
		
		if(index==key){
			printf("Element not found\n");
			return;
		}
		
		if(a[index]==data){
		printf("Element found\n");
		return;
	}
	}
	
	return;
}
