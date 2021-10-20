#include<stdio.h>

int main(){
	int a[5]={23,45,26,67,12};
	int i,j;
	int temp;
	
	for(i=1; i<5; i++){
		for(j=i-1; j>=0; j-- ){
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			}
		}
	}
for(i=0;i<5; i++)
printf("%d\n",a[i]);
return 0;
}


