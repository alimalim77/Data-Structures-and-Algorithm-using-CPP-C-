#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int arr[MAX];
int front,rear;

void enqueue(int);
void dequeue();

int main(){
front=rear=-1;
enqueue(5);
enqueue(2);
enqueue(50);
dequeue();
dequeue();
enqueue(59);
enqueue(23);
dequeue();
dequeue();
dequeue();
//printf("%d and %d",front,rear);
dequeue();
printf("\n");
for(int i=0; i< MAX; i++)
printf("-> %d is at %d position\n",arr[i],i);
}

void enqueue(int a){
	if(rear==-1){
		printf("Value restored\n");
		rear=rear+1;
		front++;
	}
	
	if(rear==MAX-1 ){
		printf("Stack Overflow\n");
		return;
	}
		arr[rear]=a;
		printf("%d was inserted\n",arr[rear]);
		rear=rear+1;
		
}

void dequeue(){
	if(front==MAX-1 || front== rear){
		printf("Stack Underflow\n");
		return;
	}
		int x;
		x=arr[front];
		printf("%d was deleted\n",arr[front]);
		front=front+1;
	
}
