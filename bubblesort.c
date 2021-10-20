#include<stdio.h>


int main(){
	int a[10],i;
	int j,temp,num;
	
	printf("Enter the number to give\n");
	scanf("%d",&num);
	
	for(i=0; i<num; i++){
		printf("a[%d]=\t",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<num-1; i++){  // put 1 in plae i=0 then j < num-i instead of num-1-i
		for(j=0;j<num-1-i; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("*****************************************************\n");
		for(i=0; i<num; i++){
		printf("a[%d]=\t%d\n",i,a[i]);
		
	}
	
	return 0;
}
