#include<stdio.h>

int main(){
	int arr[8]= {108,98,86,75,64,43,32,1};
	int temp,num;
	int left=0,right=7,i,j;
	int mid;
	
	
	/*for(i=0; i<8; i++){
	printf("Element at %d index is:\t",i);
	scanf("%d",&arr[i]);
	}
	
	for(i=0; i<8; i++){
		for(j=1; j<8; j++){
			if(arr[i]<=arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
	}*/
	
	for(i=0; i<8; i++)
	{
			{
			printf("%d\t",arr[i]);
			}	
		printf("\n");	
	}
	
		
	mid = (left+right)/2;
	//printf("Value of mid is %d\n", mid );
	
	printf("Enter the number to binary search\n ");
	scanf("%d", &num );
	
	while(left<=right){
		
		if(num>arr[mid]){
			right=mid-1;
		
			
		}
		else 
		if(num<arr[mid]){
			left= mid+1;
			
		}
		else{
			printf("Number found at %d index\n", mid );
			break;
		}
		mid=(left+right)/2;	
	}
	
	if(left>right){
		printf("Element does not exist in array\n");
	}
	return 0;
}
