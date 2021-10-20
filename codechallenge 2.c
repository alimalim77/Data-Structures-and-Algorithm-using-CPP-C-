#include<stdio.h>
void pass(int [][3]);

int main(){
	int arr[][3]={{1,2,3},{2,4,6},{8,16,24}};
	pass(arr);
	return 0;
}

void pass(int a[][3]){
	int i,j, b[3][3];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			b[i][j]=a[j][i];
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
}
