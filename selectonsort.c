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
	
	for(i=0; i<num-1; i++){  // put 1 in plae i=0 then j < num instead of num+1
		for(j=i+1;j<num; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("*****************************************************\n");
		for(i=0; i<num; i++){
		printf("a[%d]=\t%d\n",i,a[i]);
		
	}
	
	return 0;
}
