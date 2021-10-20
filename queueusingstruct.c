#include<stdio.h>
#define MX 10

typedef struct queue_type
   {
   	
	 int arr[MX] ;    
	 int front ;       
	 int rear ;
   } node;
   
int insert(node *q, int item)
 {

 if ((q->front==0 && q->rear==MX-1) || q->front==q->rear+1)
 {
 	printf("Queue overflow error");

    getch();
 	return 0 ;  
}
	  	if (q->front==-1)       
		  q->front=q->rear=0 ;
		  else  
		if (q->rear==MX-1)
	  	  q->rear=0 ;
	  	  else
	  	  q->rear=q->rear+1 ; 

	  q->arr[q->rear]=item ;        
 return 1 ; 
 }
 
void delete(node *q)
 {
 	int val,count=0 ;
 	while(1)

{
	 	if (q->front==-1)
 	{
	 printf("Queue underflow error ......") ;
 	getch() ;
	break ;    
	 }
	 val=q->arr[q->front] ;       
	 if (val%3==0 && val%5!=0)
	 ++count ; 
	 
	 if (q->front==q->rear)       
	 q->front=q->rear=-1 ;        
	 else
	 if (q->front==MX-1)
	 q->front=0 ;
	 else
	 q->front++ ;
	  }   
 	printf("\n Total queue elements divisible by 3 but not by 5 =%d",count);
 }
 
int main()
   {
   char ch ;
    int val,item,count;
 	node queue ;    
 	queue.front=-1 ; 
 	queue.rear=-1 ;   
    int flag=1 ;
        while(1)
			{
			  printf("\n\n\t Enter the Number to Push :=> ");
			  scanf("%d",&item);
			  flag=insert(&queue,item);  
			       if (flag==0)     
 				            break ; 
			}
  
	delete(&queue) ; 
}
